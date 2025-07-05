#include<iostream>
#include<string>
#include <queue>    
#include <unordered_map>
using namespace std;
 string frequencySort(string s) {
        unordered_map<char, int>  freq;
        //count frequency of each char
        for(char ch: s){
            freq[ch]++;
        }
        //push (char, freq) pairs into max-heap(decreasing order)
        priority_queue<pair<int, char>> maxHeap;
        for(auto [ch, count] : freq){
            maxHeap.push({count,ch});
        }
       //pop from heap
       string result="";
       while(!maxHeap.empty()){
        auto [count, ch] =  maxHeap.top();
        maxHeap.pop();
        result += string(count, ch);
       }
    return result;
    }
int main(){
    string s = "tree";
    cout<< frequencySort(s)<<endl;
  return 0;
}



    //TC:O(n logn)
    //SC:O(n)
    