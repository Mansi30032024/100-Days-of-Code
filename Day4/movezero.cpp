#include<iostream>
#include<vector>
using namespace std;

    vector<int> moveZeroes(vector<int> nums) {
        int n = nums.size();
        int j ;
        for(int i =0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
     
        for(int i =j+1;i<n;i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return nums;
      }
  int main(){
     
    vector<int> arr={0,1,3,0,12};
  
    vector<int> res = moveZeroes(arr);
    for(int val : res){
        cout<<val<<" ";
    }
 return 0;
<<<<<<< HEAD
  }
day3
=======
  }
>>>>>>> c5c5653 (day4)
