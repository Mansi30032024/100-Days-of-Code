class Solution {
public:
    int maxSum(vector<int>& nums) {
        // check if all are negative
        int mn = INT_MIN;
        bool pos = false;
        for(auto& val:nums){
            if(val>0){pos=true;break;}
            mn = max(mn, val);
        }
        if(pos==false){return mn;}

        // else answer will always a positive number or 0
        unordered_map<int,bool> mpp;
        int sum = 0;
        for(auto& val:nums){
            if(val >= 0){
                if(!mpp.count(val)){
                    if(val>=0){sum+=val;}
                }
                mpp[val]=true;
            }
        }
        return sum;
    }
};