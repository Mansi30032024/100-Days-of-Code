class Solution {
    
  public:
  int priority(char c){
      
      if(c == '^') return 3;
       else if (c== '*' || c== '/') return 2;
        else if (c == '+' || c == '-') return 1;
        else  return -1;
       
  }
    string infixToPostfix(string& s) {
        // code here
        int n = s.size();
        int i=0;
       stack<char> st;
       string ans ="" ;
        while(i<n){
            if((s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= '0' && s[i] <= '9')  ){
                  ans = ans+ s[i]; //directly add to ans if operand
            }
           
            else if(s[i] =='(') st.push(s[i]);
            
            else if(s[i] ==')' ){
                while(!st.empty() && st.top() != '('){
                    ans += st.top(); // add to ans and pop out
                    st.pop();
                }
                st.pop(); // pop opening bracket
            }
             //operators
            else{
                while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    ans += st.top(); // add to ans and pop out
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }
        //rest 
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
      return ans;      
    }
};
//TC: O(2N) --> inner while run at most N times & outer while N times

//SC:O(2N)--> stack and ans string

// "a+b*(c^d-e)^(f+g*h)-i"
//abcd^e-fgh*+^*+i-
//i=0              st                  ans 

             











*/