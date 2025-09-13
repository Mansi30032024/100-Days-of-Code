class Solution {
public:
    string removeKdigits(string num, int k) {
        string st;
        for (char d : num) {//O(N)
            while (!st.empty() && k > 0 && st.back() > digit) {
                st.pop_back();
                k--;
            }
            st.push_back(digit);
        }
        while (k > 0 && !st.empty()) {//O(k)
            st.pop_back();
            k--;
        }
        int i = 0;
        while (i < st.size() && st[i] == '0') i++; //O(n)

        string res = st.substr(i);//o(n)
        return res.empty() ? "0" : res;
    }
};
//tc:O(N)
//sc: O(N)+O(N) for res and string


    string removeKdigits(string num, int k) {
        stack<char> st;
        for(int i=0;i<num.size();i++){//O(N)
            while(!st.empty() && k>0 && (st.top()-'0')>(num[i]-'0')){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){st.pop(); k--; } //O(k)
        if(st.empty()) return "0";

        string res="";
        while(!st.empty()){//O(N) 
            res = res + st.top();
            st.pop();
        }
        while(res.size() !=0 && res.back() == '0'){//o(N)
            res.pop_back();
        }
        reverse(res.begin(), res.end());//remaining  o(N)
        // overall --> O(N)

        return res.empty() ? "0" : res;
    }

//TC:O(3N)+O(k)  => O(N)
//SC:O(N)+ O(N) for stack and res