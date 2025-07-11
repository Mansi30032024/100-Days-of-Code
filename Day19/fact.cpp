#include<iostream>
using namespace std;
//factorial using recursion
//Tc: O(n)
//Sc: O(n) for function call stack
int fact(int n){
  if(n==0 ){return 1; }
  return n * fact(n-1);
}
int main(){
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    */
    int n ;
    cin>>n;
    cout<<fact(n)<<endl;
  return 0;
}