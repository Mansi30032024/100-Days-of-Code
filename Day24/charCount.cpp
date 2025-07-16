#include<iostream>
using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r",stdin);
  freopen("output.txt", "w",stdout);
  #endif

  string s;
  cin>>s;

  //precompute
  // int hash[26]={0};
  int hash[256]={0};
  for(int i=0;i<s.size();i++){
    // hash[s[i]-'a']++;
    hash[s[i]]++;
  }
  int q;
  cin>>q;
  while(q--){
    char ch;
    cin>>ch;

    //fetch
    // cout<<hash[ch-'a']<<endl;
  cout<<hash[ch]<<endl;
  }
  return 0; 
}