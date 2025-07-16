#include<iostream>
#include<map>
using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  int n;
  cin>>n;
  int arr[n];
  //  unordered_map<int, int> mpp;
 for(int i=0;i<n;i++){
  cin>>arr[i];
    //  mpp[arr[i]]++; also done along with input as it will take O(1)
    //in total this for loop will take O(n*1) 
 }
 //precompute
 map<int, int> mpp;
 for(int i=0;i<n;i++){
    mpp[arr[i]]++;
 } 
 //iterate in the map
//  for(auto it: mpp){
//    cout<< it.first<<"-->"<<it.second<<endl;
//  }
 int q;
 cin>>q; //query count
 while(q--){
  int num;
  cin>>num;
// fetch
 cout<<mpp[num]<<endl;
 }
  return 0;
}
// map stores key value pair in sorted order
// unordered_map stores key value pair in unsorted order
