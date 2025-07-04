#include<iostream>
#include<climits>
using namespace std;
int reverse(int x){
        int rev = 0;
        while(x != 0){
            int dig = x%10;
            if(rev>INT_MAX/10  || rev< INT_MIN/10){
                return 0;
            }
            rev = rev*10 + dig;
            x = x/10;
        }
        return rev;
}
    bool isPalindrome(int x) {
        if(x<0) return false;
       int revNum = reverse(x);
       return revNum == x;
        
    }

int main(){
   int x; 
   cin>>x;
   cout<<isPalindrome(x)<<endl;
  return 0;
}