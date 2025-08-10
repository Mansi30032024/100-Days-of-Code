class Solution {

public:
int count_palindrome(string s, int left, int right){
    int cnt=0;
    while( left>= 0 && right < s. length() && s[left]== s[right]){
        cnt++; 
        //expand around center
        //pointers out
        left--; 
        right++; 
    }
    return cnt;
}
    int countSubstrings(string s) {
        int res =0;
        for(int i =0;i<s.length();i++){
            res += count_palindrome(s,i,i);//odd length
             res += count_palindrome(s,i,i+1);//even length
        }
        return res;
    }
};

//tc:O(n^2)
//SC: O(1)