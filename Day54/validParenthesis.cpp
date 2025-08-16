class Solution {
public:
    bool isValid(string s) {
        
     stack<char> st;
        for(int i=0; i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
              if( st.empty()) return false;
              char ch = st.top();
              st.pop();
              //s[i]-->closing , st-->opening of same typr
              if((s[i]==')' && ch =='(' ) || (s[i]=='}' && ch =='{') || (s[i]==']' && ch =='[')){
                continue;
              }
              else{
                return false;
              }
                  
            } 
           
        }
        return st.empty();
    }
};
//TC: O(n)
//SC: O(n) in worst case, if all opening brackets are present