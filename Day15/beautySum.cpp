#include<iostream>
#include<string>
#include<unordered_map>
#include<climits>
using namespace std;

int beautySum(string s) {
        int n = s.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mp;
            for (int j = i; j < n; j++) {
                mp[s[j]]++;  // update freq for curr char
                
                int maxi = INT_MIN;
                int mini = INT_MAX;
                // traverse the map to find min, max freq
                for (auto it : mp) {
                    mini = min(mini, it.second);
                    maxi = max(maxi, it.second);
                }
                sum += (maxi - mini);
            }
        } return sum;
    }
  
    int main(){
      string s="aabcb";
      cout<<beautySum(s)<<endl;
      return 0;
    }