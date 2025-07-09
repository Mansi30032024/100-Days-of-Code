
#include<iostream>
#include<vector>
using namespace std;
 int majorityElement(vector<int>& arr) {

         int n = arr.size();
        int cnt=0;
        int el ;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el = arr[i];
            }
            else if(arr[i]== el){
                cnt++;
            }
            else { cnt--;}
        }
              return el;
        }
int main(){
  vector<int> arr ={2,2,1,3};
  cout<<majorityElement(arr)<<endl;
  return 0;
}