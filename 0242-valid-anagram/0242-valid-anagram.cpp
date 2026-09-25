class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!= t.length()){
            return false;
        }
        unordered_map<char,int>jhola;

        for(char ch : s){
            jhola[ch]++;
        }
        for(char ch : t){
            jhola[ch]--;
        }
        for(auto it : jhola){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};