class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
       vector<int> nge(n);
        stack<int> st;
        //circular--> //[1 2 1] 1 2 1
        //hypothetical doubled 
        for(int i=2*n-1;i>=0;i--){
           while( !st.empty() && st.top()<=nums[i%n]){
            st.pop();
           }
           if(i<n){
            nge[i]= st.empty() ? -1 : st.top();
           }
           st.push(nums[i%n]);
        }
        return nge;
    }
};

//TC:O(4N)
//SC:O(2N)