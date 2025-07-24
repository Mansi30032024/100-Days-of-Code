class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

       unordered_map<int,int> mp; //nums2[i] , nextgreater
       stack<int> s; // to find next greater most recent
       // find all next greater for nums2
       for(int i = nums2.size()-1 ; i>=0; i--){
        while(s.size() > 0 && s.top() <= nums2[i]){
            s.pop();
        }
        if(s.empty()){mp[nums2[i]] = -1;} 
        else {mp[nums2[i]]= s.top();}

        s.push(nums2[i]);
       }
     vector<int> ans;
     for(int i=0;i<nums1.size();i++){
        ans.push_back(mp[nums1[i]]);
     }
     return ans;
    }
};