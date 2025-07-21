//leeetcode --> leetcode
//aaabbaaaa --> aabbaa

    string makeFancyString(string s) {
        string res;
        char last = s[0];
        res.push_back(last);
       
        int cnt=1;
        for(int i=1;i<s.size();i++){
           if(s[i] == last ){
                cnt++;
                if(cnt < 3) res.push_back(s[i]);
            }
            else{
                last= s[i];
                cnt =1;
                res.push_back(s[i]);
            }

        }
        return res;
    }
