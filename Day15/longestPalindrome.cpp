#include<iostream>
#include<string>
using namespace std;
 string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) return s;
        string LPS = "";

        for (int i = 0; i < n; i++) {
            // odd length
            int low = i, high = i;
            while (low >= 0 && high < n && s[low] == s[high]) {
                if (high - low + 1 > LPS.length()) {
                    LPS = s.substr(low, high - low + 1);
                }
                low--;
                high++;
            }
            // even length 
            low = i, high = i + 1;
            while (low >= 0 && high < n && s[low] == s[high]) {
                if (high - low + 1 > LPS.length()) {
                    LPS = s.substr(low, high - low + 1);
                }
                low--;
                high++;
            }
        }
        return LPS;
    }
      
    int main(){
      string s= "babad";
      cout<<longestPalindrome(s)<<endl;
      return 0;
    }