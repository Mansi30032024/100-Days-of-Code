#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> &arr, int n){
    int s=0, e =n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}

int main () 
{
    vector<int> arr = {2,3,9,20,34,80};
    int n = arr.size();
    vector<int> a = reverseArray(arr,n);
    for (int val : a){ // for each loop
        cout<<val<<" ";
    }
    return 0;
}