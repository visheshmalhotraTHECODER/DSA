class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> jhola;

        for (int i = 0; i < strs.size(); i++) {

            string word = strs[i];

            sort(word.begin(), word.end());

            jhola[word].push_back(strs[i]);
        }
        vector<vector<string>> ans;

        for (auto item : jhola) {
            ans.push_back(item.second);
        }
        return ans;
    }
};