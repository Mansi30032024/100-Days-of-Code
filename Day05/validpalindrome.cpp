 #include<iostream>
using namespace std;
        bool valid(char ch){
        if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
         }
         char tolowercase(char ch){
        if((ch>='a'&& ch<='z') || (ch>='0' &&  ch <='9') ){
            return ch;
        }
        else{
            return ch-'A'+'a';// uppercase to lowe case
        }
     }
       bool checkPalindrome(string a) {
      
      int n = a.length();
      int st =0, e=n-1;
      while(st<=e){
          if(a[st] != a[e]){ return 0;}
          else  st++; e--;
      }
      return 1;
    }

    bool isPalindrome(string s) {
// extra char 
     string temp ="";
     for(int j =0;j<s.length();j++){
        if(valid(s[j])){ temp.push_back(s[j]); }
     }
//lowercase
 for(int j =0;j<temp.length();j++){
    temp[j]= tolowercase(temp[j]);
 }
    return checkPalindrome(temp);
    }
  
    int main(){
      string s ="A man, a plan, a canal: Panama";
      cout<<isPalindrome(s)<<endl;
      return 0;
    }
  