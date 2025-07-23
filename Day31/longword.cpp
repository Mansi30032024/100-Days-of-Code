#include<iostream>
#include<vector>
using namespace std;

int main () 
{
    int n =12;
    while(n--){
    string s="HELLO SIGN";
    
        if(s.length() > 10){
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }else{
            cout<<s<<endl; // fewer then print
            
        }
    }
    return 0;
}