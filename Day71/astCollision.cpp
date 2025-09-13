class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n = a.size();
      vector<int> st;
      for(int i=0;i<n;i++){
        if(a[i]>0){ st.push_back(a[i]);}
        //negative
        else{
            while(!st.empty() && st.back()>0 && st.back() < abs(a[i])){
                st.pop_back();
            }
            if(!st.empty() && st.back() == abs(a[i])){
                st.pop_back();
            }
            else if(st.empty() || st.back()<0){
                st.push_back(a[i]);
            }
        }
      }
        return st;
    }
};
//TC: O(N)
//SC: O(N)
