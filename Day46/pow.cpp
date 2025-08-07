
#include<iostream>
#include<cmath>
using namespace std;
    double myPow(double x, int n) {
        long long N= n; // handle INT_MIN , INT_MAX
        if(x==0) return x;
       if(n==0) return 1;
       if(x==1) return x;
       if(N<0)  {
        x= 1/x ; 
        N = -N;
       }
         double res =1.00;
    
       while(N>0){
        if(N%2 == 1){ 
          res = res*x;
        }
        x = x*x; 
        N = N/2;
       }
       return res;
    }
int main(){
  double x =9.00;

  int n =2;
 
  cout<<myPow(x,n)<<endl;
  return 0;
}
/*TC: O(log N)
double myPow(double x, int n) {
     

       double res = pow(x,n);
     
       return res;
    }
*/
/*TC: O(N)
SC:O(1)--> power(x,n)
double myPow(double x, int n) {
     double res = 1.00;
     long long N = n;
     if(N<0){
        x = 1/x;
        N= -N;
     }
     for(long long i=0;i<N ;i++){
        res = res* x;

     }
     return res;
    }
     */