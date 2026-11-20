class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>jhola;

        for(char ch : s)
        {
            jhola[ch]++;
        }
        for(char ch : t)
        {
            if(jhola[ch] == 0)
            {
                return ch;
            }
            jhola[ch]--;

        }
        return ' ';
        
    }
};