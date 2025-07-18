#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
  int n = nums.size();
  unordered_map<int, int> mpp;
  for(int i=0;i<n;i++){
    int more = target -nums[i];
    if(mpp.find(more) != mpp .end()){//found
      return {mpp[more], i};// i is current index , mpp[]   will return index ...
    }
   else{
    mpp[nums[i]] = i; // nums[i] is the key and i is the value
   }
  }
  return {-1,-1};
}
int main(){

  vector<int> nums ={2,7,11,13};
  int target = 9;
  vector<int> result = twoSum(nums, target);
    for (int val : result) cout << val << " ";
    
    cout << endl;
  return 0;

}