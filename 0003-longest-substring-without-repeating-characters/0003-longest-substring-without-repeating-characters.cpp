class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n  = s.size();

        unordered_set<char>jhola;

        int left = 0;

        int maxLen = 0;

        for(int  right = 0 ;right<n; right++){
            while(jhola.find(s[right])!= jhola.end()){
                jhola.erase(s[left]);
                left++;
            }
            jhola.insert(s[right]);
            maxLen = max(maxLen, right-left+1);

        }
        return maxLen; 

        
    }
};