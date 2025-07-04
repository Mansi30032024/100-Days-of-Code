#include<iostream>
using namespace std;
bool armstrongNumber(int n) {
       
            int copyN = n;
        int sumOfCubes =0;
        while(n != 0){
            int dig = n%10;
            sumOfCubes += (dig*dig*dig);
            n /=10;
        }
        if(sumOfCubes == copyN){
            return true;
        }
       return false;
    }
int main(){
     int x ;
     cin>>x;
     cout<<armstrongNumber(x);git status
  return 0;
}