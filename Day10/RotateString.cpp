 
#include<iostream>
#include<string>
using namespace std;

 bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;
        string s1 = s+s;
        int indx = s1.find(goal);
       if(indx ==-1){  return false;}
       return true;
    }
    
int main(){
  string s;
  cin>>s;
  string goal;
  cin>>goal;

  cout<<rotateString(s,goal)<<endl;
  return 0;
}
