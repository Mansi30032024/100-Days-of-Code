#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int>& arr, int n, int x){
    int low=0, high=n-1;
    int first=-1;
    while (low<=high)
    {
      int mid=(low+high)/2;
      if(arr[mid]==x) {
        first=mid;
        high=mid-1;//looking for first 
      }
      else if(arr[mid]<x){low=mid+1;}
      else high=mid-1;
    }
    return first;
}
int lastOcc(vector<int>& arr,int n,int x){
    int low=0, high=n-1;
    int last=-1;
    while (low<=high)
    {
      int mid=(low+high)/2;
      if(arr[mid]==x) {
        last=mid;
        low=mid+1; //looking for last
      }
      else if(arr[mid]<x){low=mid+1;}
      else high=mid-1;
    }
    return last;
}
int main(){
 vector<int> arr={2,3,4,4,5,5,5,6};
  int n = arr.size();
  int x=5;
    int first = firstOcc(arr,n,x);
      if(first==-1)   cout<<"[-1,-1]"<<endl;
    int last = lastOcc(arr,n,x);
    cout<<"["<<first<<","<<last<<"]"<<endl;
    return 0;
}




/*
int lowerBound(vector<int> &arr, int n , int x){//smallest index
  int low=0, high=n-1;
  int ans=-1;
  while (low<=high)
  {
    int mid=(low+high)/2;
    if(arr[mid]>=x){ 
       ans=mid;
       high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return ans;
}
int upperBound(vector<int> &arr, int n , int x){//largest index
  int low=0, high=n-1;
  int ans=n;
  while (low<=high)
  {
    int mid=(low+high)/2;
    if(arr[mid]>x){ 
       ans=mid;
       high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return ans;
}
int main(){
  vector<int> arr={2,3,4,4,5,5,5,6};
  int n = arr.size();
  int x=5;
   int first=lowerBound(arr, n , x);
   int last=upperBound(arr, n , x) - 1;
  
    if (first == n || arr[first] != x) {
        cout  << " [-1, -1]" << endl;
    } else {
        cout  << " [" << first << ", " << last<<"]" << endl;
    }
    return 0;
}
*/
  
