class Solution {
public:
 void perm(vector<vector<int>> &ans , vector<int> nums , int index){
        if(index >= nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i=index; i<nums.size();i++){
            swap(nums[index],nums[i]);
            perm(ans , nums , index+1);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans ; 
        int index = 0 ;
        perm(ans , nums , index);
        return ans;
    }
};