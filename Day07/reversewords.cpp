
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
 string reverseWords(string s) {
        
   vector<string> words;
    int n = s.length();
    int i = 0;

    while (i < n) {
 
        while (i < n && s[i] == ' ') i++;
        int start = i;

        while (i < n && s[i] != ' ') i++;
        if (start < i)
            words.push_back(s.substr(start, i - start));
    }
    reverse(words.begin(), words.end());

    string result;
    for (int j = 0; j < words.size(); ++j) {
        result += words[j];
        if (j != words.size() - 1) result += " ";
    }

    return result;
}
int main(){
    string s = "  the  sky  is   blue  ";
    cout << reverseWords(s)  << endl;
  return 0;
}