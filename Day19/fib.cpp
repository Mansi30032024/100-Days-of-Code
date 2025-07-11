
#include<iostream>
using namespace std;
//multiple recursion calls
 int fib(int n) {
       
        if(n <=1 ) return n;
         int last = fib(n-1);
         int secLast = fib(n-2);
        return last + secLast;
    }
  int main(){
        int n;
        cin>>n;
        cout<<fib(n)<<endl;
    return 0;
  }
  // 0 1 1 2 3 5 8...
  //f(5) = f(4) + f(3)

  /*
  f[0]=0, f[1] =1;
  for(i = 2 to n){
  f[i] = f[i-1] + f[i-2];
  }
  */