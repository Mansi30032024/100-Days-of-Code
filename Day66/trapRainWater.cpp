class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0) return 0;
        vector<int> prefix(n);
         vector<int> suffix(n);
         prefix[0] = height[0];
         for(int i=1;i<n;i++ ){
            prefix[i] = max(prefix[i-1], height[i]);
         }
          suffix[n-1] = height[n-1];
         for(int i=n-2;i>=0;i-- ){
            suffix[i] = max(suffix[i+1], height[i]);
         }
       int total=0;
        for(int i = 0;i<n;i++){
            if(height[i] <  prefix[i] && height[i]< suffix[i]){
             total += min(prefix[i],suffix[i]) - height[i];}
        }
  return total;
    }
};
//brute force
//TC:O(3N) 
//SC:O(2N)
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6