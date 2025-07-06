#include<iostream>
#include<string>
#include<climits>
using namespace std;

int myAtoi(string s) {
        int sign =1;
        long res=0;
        int indx=0;
        while(indx < s.length() && s[indx]==' '){
            indx++;
        }
        if(indx < s.length()  && (s[indx]=='+' || s[indx]=='-')){
           sign = (s[indx] == '-') ? -1 : 1;
            indx++;
        }
        while(indx < s.length() && (s[indx] >='0' && s[indx]<='9')){
            int digit = s[indx] -'0';
            if (res > (INT_MAX - digit)/10)
                return sign==1 ? INT_MAX : INT_MIN;
                res = res*10 + digit;
            indx++;
        }
        return res*sign;
    }
int main(){
  string s = "42";
  cout<<myAtoi(s)<<endl;
  return 0;
}