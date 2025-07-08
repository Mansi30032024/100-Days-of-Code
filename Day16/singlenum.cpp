 #include<iostream>
 #include<vector>
using namespace std;
  int singleNumber(vector<int>& nums) {
    int ans =0;
    for(int val : nums){
        ans  = ans ^ val;
    }
    return ans;
    
    }
int main(){
      vector<int> arr = {2,2,1};
         int single = singleNumber(arr);
         cout<<single<<endl;
  return 0;
}