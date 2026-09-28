class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int left = 0;

        int lenMax = 0;

        unordered_set<char>jhola;

        for(int right= 0; right<n; right++){
            while(jhola.find(s[right])!= jhola.end()){
                jhola.erase(s[left]);
                left++;
            }
            jhola.insert(s[right]);


            lenMax =  max(lenMax, right-left+1);

            
        }
        return lenMax;
        
    }
};