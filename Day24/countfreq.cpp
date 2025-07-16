#include<iostream>
using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  int n;
  cin>>n;
  int arr[n];
 for(int i=0;i<n;i++){
  cin>>arr[i];
 }
 
 //precompute
  //int hash[100001]; // if max size can go up to 10^5
 int hash[13]={0}; // max size can go up to 10
for(int i=0;i<n;i++){
  hash[arr[i]] += 1;
}
 int q;
 cin>>q; //query count
 while(q--){
  int num;
  cin>>num;
// fetch
 cout<<hash[num]<<endl;
 }
  return 0;
}

/*
inside main
array of size 10^6 can be declared that is of int type
if it is bool then upto 10^7

globally 
you can declare arr of size 10^7 of int type 
if it is bool then upto 10^8

*/