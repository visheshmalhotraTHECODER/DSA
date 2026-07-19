class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = "";

        for (int i = 0; i < strs[0].size(); i++) {
            prefix += strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (strs[j].find(prefix) != 0) {
                    prefix.pop_back();
                    return prefix;
                }
            }
        }
        return prefix;
    }
};