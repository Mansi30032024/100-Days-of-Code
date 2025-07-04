
#include<iostream>
#include<vector>
using namespace std;


 int search(vector<int>& arr, int target) {
            int n= arr.size();
        int low=0, high=n-1;
        while(low<= high){
            int mid = (low+high)/2;
            if(arr[mid]== target) return mid;
            //left sorted
            if(arr[low]<= arr[mid]){
            if(arr[low]<= target && target<=arr[mid]){
                high = mid-1;
            }
            else low = mid+1;
            }
            //right sorted
            else{
            if(arr[mid]<=target && target<=arr[high]){
                low = mid+1;
            }
            else high = mid-1;
            } 
        }
        return -1;
    }

int main(){
  vector<int> arr ={4,5,6,7,0,1,2};
  int target =0;
  int index = search(arr,target);
  cout<<index<<endl;
  return 0;
}