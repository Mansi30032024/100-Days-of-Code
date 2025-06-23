#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr, int n , int k){
  int low=0, high=n-1;
  while(low<=high){
    int mid =(low+high)/2;
    if(arr[mid]==k){
      return mid;
    }
    else  if(arr[mid]<k){
      //search in right half
      low=mid+1;
    }
    else{
      //search in left half
      high = mid-1;
    }
  }
  return -1;
}
 int main(){
     vector<int> arr={2,8,10,15,37,80};
     
     int n = arr.size();
    cout<< binarySearch(arr,n,37)<<endl;
    cout<< binarySearch(arr,n,8)<<endl;
  return 0;
 }
 