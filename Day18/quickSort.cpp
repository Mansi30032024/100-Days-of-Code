#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot=arr[low];
    int i =low;
    int j =high;
    while(i<j){
        while(arr[i]<=pivot && i <=high-1){ //if smaller then move
        //for left <=
            i++;
        }
        while(arr[j]>pivot && j>=low+1){//if greater then move
        //for right >
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j; //partition index
    }
void qS(vector<int>& arr, int low, int high)
{
    if(low<high){
       int  pIndx = partition(arr,low,high);
        qS(arr,low, pIndx-1);
        qS(arr,pIndx+1, high);
    }
}
vector<int> quickSort(vector<int>& arr)
{
    qS(arr,0, arr.size()-1);
    return arr;
}

int main(){
  vector<int> arr={8,3,4,6,1,5,7,2};
  int n = arr.size();
  quickSort(arr);
  for(int num : arr) {
    cout << num << " ";
   }
cout << endl;
  return 0;
}