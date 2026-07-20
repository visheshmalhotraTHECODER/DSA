class Solution {
public:
    string longestPalindrome(string s) {

        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            int left = i - 1;
            int right = i + 1;

            string temp = "";
            temp += s[i];

            while (left >= 0 && right < s.size() && s[left] == s[right]) {

                temp = s[left] + temp + s[right];

                left--;
                right++;
            }
            if (temp.size() > ans.size()) {
                ans = temp;
            }
        }
        for (int i = 0; i < s.size(); i++) {

            int left = i;
            int right = i + 1;

            string temp = "";

            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                temp = s[left] + temp + s[right];

                left--;
                right++;
            }
            if (temp.size() > ans.size()) {
                ans = temp;
            }
        }

        return ans;
    }
};