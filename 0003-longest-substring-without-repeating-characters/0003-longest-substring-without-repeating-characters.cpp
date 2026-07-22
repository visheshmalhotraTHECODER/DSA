class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans = 0;

        for(int i = 0; i<s.size();i++){

            unordered_set<int>jhola;

            for(int j = i ;j<s.size(); j++){

                if(jhola.find(s[j])!=jhola.end()){
                    break;
                }
                jhola.insert(s[j]);

                int length = j-i+1;

                ans = max(ans, length);


            }
        }
        return ans;
    }
};