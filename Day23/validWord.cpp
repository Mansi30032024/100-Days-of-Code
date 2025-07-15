class Solution {
public:
    bool isValid(string word) {
     if (word.size() < 3) return false;
       
        bool vowel = false;
        bool cons = false;

     for (char ch : word) {
            if(!isalnum(ch))   return false;
            char lowerCh = tolower(ch);

           if(isalpha(ch)) {
              if(lowerCh =='a'|| lowerCh =='e'|| lowerCh =='i' || lowerCh =='o'|| lowerCh == 'u')
                    vowel = true;
              else
                    cons = true;
            }
        }
        return vowel && cons;
    }
};
