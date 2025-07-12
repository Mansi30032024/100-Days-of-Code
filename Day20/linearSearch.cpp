#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int n, int target){
  if(n==0) return false;
  if(arr[0] == target) return true;
  else{
    bool ans = linearSearch(arr+1, n-1, target);
    return ans;
  }  
}
int main(){
  int n =6;
   int arr[n] = {1,3,7,90,98,100};
   cout<<linearSearch(arr, n, 90)<<endl;
   return 0;
}