class Solution {
public:
 vector<int> findNSE(vector<int>& arr){
    int n = arr.size();
    vector<int> nse(n);
    stack<int> st;
    for(int i=arr.size()-1 ; i>=0;i--){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }
        nse[i]= st.empty() ? arr.size() : st.top();
        st.push(i);

    }
    return nse;
 }
 
 vector<int> findPSEE(vector<int>& arr){
    int n = arr.size();
    vector<int> pse(n);
    stack<int> st;
    for(int i=0 ; i<arr.size();i++){
        while(!st.empty() && arr[st.top()] > arr[i]){
            st.pop();
        }
        pse[i]= st.empty() ? -1 : st.top();
        st.push(i);

    }
    return pse;
 }
    int sumSubarrayMins(vector<int>& arr) {
        int total =0;
        int mod = (int)1e9+7;
        int n = arr.size();
        vector<int> nse = findNSE(arr);
vector<int> pse = findPSEE(arr);


        for(int i =0;i<n;i++){
            int left = i-pse[i];
            int right = nse[i]-i;
            total =  (total +(right*left*1LL*arr[i])%mod)%mod;
        }
        return total;
    }
};



//TC:O(5n)
//SC:O(5n)
//generate all subarrays and find minimum 