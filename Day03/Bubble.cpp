#include<iostream>
using namespace std;
void bubbleSort(int arr[] , int n) {
    bool isSwap = false;
        for(int i=0;i<n-1;i++){
            for(int j=0; j<n-i-1;j++){
                if(arr[j]>arr[j+1])
                    swap(arr[j], arr[j+1]);
                    isSwap = true;
          }
          if(!isSwap){ return;}
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
   bubbleSort(arr,n);
   printArr(arr,n);

  return 0;
}

//O(n^2)