#include<iostream>
#include<vector>
using namespace std; 
 
 int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n==1) return 0;
        if(arr[0]>arr[1]) return 0;
        if(arr[n-1]>arr[n-2]) return n-1;
        int low=1, high=n-2;
        while(low<=high){
            int mid =(low+high)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){ return mid; }
            else if (arr[mid]>arr[mid-1]) low=mid+1;  
            else high=mid-1;
        }
        return -1;
      }
int main(){
       vector<int> arr={1,3,4,8,9,1,2,0};
       cout<<peakIndexInMountainArray(arr);

    return 0;
}

//852. Peak Index in a Mountain Array