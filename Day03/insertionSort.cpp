#include<iostream>
using namespace std;
void insertionSort(int arr[] , int n) {
       
        for (int i =1;i<n;i++){
            int curr = arr[i];
            int prev = i-1;
            while(prev>=0 && arr[prev]>curr){
              arr[prev+1] = arr[prev];
              prev--;
            }
          arr[prev+1] = curr;
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
   insertionSort(arr,n);
   printArr(arr,n);

  return 0;
}

