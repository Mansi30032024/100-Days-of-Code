class Solution {
public:
    bool isValid(string s) {

        stack<char>st; 
        for(auto it: s) {
            //opening
            if(it=='(' || it=='{' || it == '[') st.push(it); 
            //closing   
            else {
                if(st.size() == 0) return false; 
                char ch = st.top(); 
                st.pop(); 
                //matching
         if((it == ')' and ch == '(') or  (it == ']' and ch == '[') or (it == '}' and ch == '{')) continue;
                else return false;
            }
        }
        return st.empty();
        
    }
};
//tc:O(N)
//Sc:O(N)