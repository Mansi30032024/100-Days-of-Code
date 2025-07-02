#include<iostream>
#include<string>
using namespace std;

 bool checkEqual(int a[26], int b[26]){
        for(int i=0;i<26;i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
 }

bool checkInclusion(string s1, string s2) {
        //character count array
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int indx = s1[i]-'a';
            count1[indx]++;
        }
        //traverse s2 in window of size s1.length nd compare
        int i=0;
        int windowSize = s1.length();
         int count2[26]={0};
        while(i<windowSize && i<s2.length()){
            int indx = s2[i]-'a';
            count2[indx]++;
               i++;
        }
       if(checkEqual(count1, count2))
                  return 1;

       while(i<s2.length()){
        char newChar = s2[i];
        int indx = newChar-'a';
        count2[indx]++;

        char oldChar =s2[i-windowSize];
        indx = oldChar-'a';
        count2[indx]--;
         i++;
         if(checkEqual(count1, count2))
                  return 1;
           
     }
     return 0;
    }
int main(){

     string s1 = "ab";
     string s2 = "eidbaooo";
     cout<<checkInclusion(s1,s2)<<endl;
  return 0;
}