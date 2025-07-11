#include<iostream>
using namespace std;
// This function prints numbers from n to 1 using backtracking 
// without f(i-1, n)
void fn(int i , int n) {//1,3
     if( i > n) return;
       fn(i+1, n);
     cout << i << endl;

}
int main() {
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
   int n ;
   cin>>n;
   fn(1,n);
    return 0;
}
/*
TC: O(n)
SC: O(n) for function call stack
 This function prints "MANSI" n times using recursion
 nd also prints 1 to n 
void fn(int i , int n) {
    if( i > n) return;
    cout <<  "MANSI" << endl;
    //cout<<i<<endl;
    fn(i+1, n);
}
int main() {
   int n;
   cin>>n;
   fn(1,n);
    return 0;
}

// This function prints numbers from 1 to n using backtracking 
// without f(i+1, n)

void fn(int i , int n) {//3,3
     if( i < 1) return;
     fn(i-1, n);
     cout << i << endl;  // this will executed after fn call returns
}
int main() {
   int n ;
   cin>>n;
   fn(n,n);
    return 0;
}
*/

/*

with recursion 
// This function prints numbers from n to 1 using recursion
void fn(int i , int n) {
    if( i < 1) return;
    cout << i << endl;
    fn(i-1, n);
}
int main() {
   int n ;
   cin>>n;
   fn(n,n);
    return 0;
}

*/

/*
#include <iostream>
using namespace std;
void print(int n){
  if(n==0) return;
  cout << n << " ";
  print(n-1);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    print(n);
    return 0;
}
*/
