class Solution {
public:
    int countHillValley(vector<int>& nums) {
  int n = nums.size();
        int prev = nums[0];
        int cnt = 0;
        for(int i = 1;i<n-1;i++){
     if(nums[i] == nums[i+1]) continue;
if((nums[i] > prev && nums[i] > nums[i+1]) ||( nums[i] < prev && nums[i] < nums[i+1] )){
                cnt++;
            }
            prev = nums[i];
        }
        return cnt;
    }
};