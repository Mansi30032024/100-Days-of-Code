 #include<iostream>
 #include<vector>
using namespace std;
  int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxi=0, cnt=0;
        for(int i=0; i<n;i++){
            if(nums[i]==1){//nums[i]==0
                cnt++;
                maxi= max(maxi, cnt);
            }
            else{ cnt=0;}
        }
        return maxi;
    }
    int main(){
         vector<int> arr = {1,1,0,1,1,1};
         int max = findMaxConsecutiveOnes(arr);
         cout<<max<<endl;
      return 0;
    }
