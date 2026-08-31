class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> jhola;

        int left = 0;

        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            while(jhola.find(s[right])!= jhola.end()){
                jhola.erase(s[left]);
                left++;
            }
            jhola.insert(s[right]);

            ans = max(ans, right - left + 1);
            }
        
        return ans;
    }
};