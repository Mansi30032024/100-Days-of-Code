 #include<iostream>
#include<string>
using namespace std;
 
 char getMaxOccuringChar(string& s) {
      
        int arr[26]={0};
        for(int i =0;i<s.length();i++){
            char ch = s[i]; // stored in char
            int number =0;
                number = ch-'a';
            arr[number]++;
        }
        int maxi=-1, ans=0;
        //find max
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
                
            }
        }
        char final = 'a'+ans;
        return final;
    }
  int main(){

    string s ="dikshamadaan";
    cout<<getMaxOccuringChar(s)<<endl;
    return 0;

  }