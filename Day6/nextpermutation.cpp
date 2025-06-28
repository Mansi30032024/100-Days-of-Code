#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

  void nextPermutation(vector<int>& nums) {
        int indx = -1;
        int n = nums.size();
       
        for(int i =n-2; i>=0 ; i--){
            if(nums[i]<nums[i+1]){
                indx = i;
                break;
            }
        }
         if(indx==-1){
            reverse(nums.begin(), nums.end());
            return;
     }
        for(int i =n-1;i>indx;i--){
            if(nums[i]>nums[indx]){
                swap(nums[i], nums[indx]);
                break;
            }
        }
        
        reverse(nums.begin()+indx+1, nums.end());
    }

int main() {
    vector<int> arr = {1, 2, 3};
    nextPermutation(arr);

    for(int val : arr) {
        cout << << val << " ";
    }

    return 0;
}