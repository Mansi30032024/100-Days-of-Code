#include<iostream>
using namespace std;

  bool isPalindrome(string& s) {
      int n = s.length();
      int st =0, e=n-1;
      while(st<=e){
          if(s[st] != s[e]){ return 0;}
          else  st++; e--;
      }
      return 1;
    }
  int main(){
    string s ="abba";

    cout<< isPalindrome(s)<<endl;
    return 0;
  }
