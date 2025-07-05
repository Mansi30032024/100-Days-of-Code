#include<iostream>
#include<string>
using namespace std;
 int maxDepth(string s) {
        int curr=0;
        int res=0;
        for(char& ch: s){
            if(ch=='(')  curr++;
             res = max(res,curr);
            if(ch==')')  curr--;
        }
        return res;
    }
int main(){
   string s = "(1+(2*3)+((8)/4))+1";
   cout<<maxDepth(s)<<endl;
  return 0;
}