#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>& nums) {
        int n= nums.size();
     int total = 0, leftSum = 0;

    for (int num : nums) {
        total += num;
    }

    for (int i = 0; i < n; ++i) {
        int rightSum=total - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;
    }

int main(){
 vector<int> arr = {1,7,3,6,5,6};
 int pivot =pivotIndex(arr);
  cout<<pivot<<endl;
   return 0;
}