class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> jhola;

        for (string s : strs) {
            int count[26];

            for (int i = 0; i < 26; i++) {
                count[i] = 0;
            }

            for (char ch : s) {
                count[ch - 'a']++;
            }
            string key = "";

            for (int i = 0; i < 26; i++) {
                key += '#';
                key += to_string(count[i]);
            }
            if (jhola.find(key) == jhola.end()) {

                jhola[key] = {};
            }

                jhola[key].push_back(s);
            }
            vector<vector<string>>ans;

            for (auto item : jhola) {
                ans.push_back(item.second);
            }
            
        return ans;
       
    }
};