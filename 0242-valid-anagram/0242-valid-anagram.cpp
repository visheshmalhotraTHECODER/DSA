class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> jhola;

        for (char ch : s) {
            jhola[ch]++;
        }
        for (char ch : t) {
            jhola[ch]--;
        }
        for (auto bag : jhola) {
            if (bag.second != 0) {
                return false;
            }
        }
        return true;
    }
};