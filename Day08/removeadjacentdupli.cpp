#include<iostream>
#include<string>
using namespace std;
string removeDuplicates(string s) {
        int i = 0; 
        for (int j = 0; j < s.length(); ++j) {
            if (i > 0 && s[i-1] == s[j]) {
                --i;  
            } else {
                s[i++] = s[j];  
            }
        }
        return s.substr(0, i);
    }
int main(){
   string s = "abbaca";
   cout<<removeDuplicates(s)<<endl;
  return 0;
}