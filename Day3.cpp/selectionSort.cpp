#include<iostream>
using namespace std;
void selectionSort(int arr[] , int n) {
       
        for (int i =0;i<n-1;i++){
            int smallestIndx = i; // unsorted part
            for(int j = i+1; j<n; j++){
                if(arr[j]<arr[smallestIndx])
                    smallestIndx = j;
            }
          swap(arr[i], arr[smallestIndx]);  
        }
  }
  void printArr(int arr[] , int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
int main(){
  int n= 7;
  int arr[]={4,7,1,9,6,2,3};
   selectionSort(arr,n);
   printArr(arr,n);

  return 0;
}

