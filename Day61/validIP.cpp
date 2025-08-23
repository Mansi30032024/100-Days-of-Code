#include <iostream>
using namespace std;

bool isValidIP(string S) {
    int cnt = 0;  //[parts]
    int i = 0, n = S.size();

    while (i < n) {
        if (cnt == 4) return false;//  4th done

        string curr = ""; //current
        while (i < n && S[i] != '.') { //stops when dot
            if (!isdigit(S[i])) return false; 
            curr += S[i++]; 
        }
		// curr = "255"
		//single part extracted

        if (curr.empty()) return false; // if still empty 
//str to int 
        int num = 0;
        for (char ch : curr) {
            num = num * 10 + (ch - '0');  
        }
		//num = 0*10 + '2'-'0'
		//num = 0+ 2 = 2
    //   [0,255]
        if (num < 0 || num > 255) return false;
    //string matches part 
        if (to_string(num) !=  curr) return false;

        cnt++;//next part 
        i++; // skip the dot
    }

    return cnt == 4; // 4 parts complete 
}

int main() {
    string S ="1.1.1.1";
   
    cout << (isValidIP(S) ? "YES" : "NO") << endl;
    return 0;
}

//SC:O(1)
//TC:O(N)--> single traversal , inside loop runs at max 3 times, constant 
