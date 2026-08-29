class Solution {
public:
    char repeatedCharacter(string s) {
        int count[26]= {0};

        for(char ch : s){
            count[ch - 'a']++;

        
        if(count[ch - 'a'] == 2){
            return ch;
        }
    }
        return {};
    }
};