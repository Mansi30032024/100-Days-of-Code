
#include<iostream>
#include<string>
using namespace std;

  string largestOddNumber(string num) {
        int n = num.length();
        for(int i = n-1;i>=0;i--){

            if((num[i]-'0')%2 != 0){ // ascii-ascii = int
                return num.substr(0,i+1);
            }
        }
        return "";
    }
int main(){
  string num;
  cin>>num;
  string result=largestOddNumber(num);
  cout<<result<<endl;
  return 0;
}