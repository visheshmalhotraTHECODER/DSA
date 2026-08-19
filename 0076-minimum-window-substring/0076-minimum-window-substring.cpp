class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> jhola;

        for (char& ch : t) {
            jhola[ch]++;
        }
        int requiredcount = t.length();

        int i = 0;
        int j = 0;

        int start_i = 0;

        int minWindowCount = INT_MAX;

        while (j < s.length()) {

            char ch = s[j];

            if (jhola[ch] > 0) {
                requiredcount--;
            }

            jhola[ch]--;
                while (requiredcount == 0) {

            int currentWindowSize = j - i + 1;

            if (currentWindowSize < minWindowCount) {
                minWindowCount = currentWindowSize;
                start_i = i;
            }
            char left = s[i];

            jhola[left]++;

            if (jhola[left] > 0) {
                requiredcount++;
            }
            i++;
        }
        j++;
    }

        if(minWindowCount == INT_MAX){
            return "";
        }
        return s.substr(start_i,minWindowCount );
    }
};