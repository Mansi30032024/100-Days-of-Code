class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int sum =0;
        int mod = (int)1e9+7;
        for(int i=0;i<arr.size();i++){
            int mini = arr[i];
            for(int j =i ; j<arr.size();j++){
                mini = min(mini, arr[j]);
                sum = (sum+mini)%mod;
            }
        }
        return sum;
    }
};
//TC:O(n^2)
//SC:O(1)
//generate all subarrays and find minimum 
3 
3 1 
3 1 2
3 1 2 4

1 
1 2 
1 2 4

2 
2 4
 
4
