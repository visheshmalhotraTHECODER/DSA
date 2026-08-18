class Solution {
public:
    int characterReplacement(string s, int k) {

        int left = 0; 

        int right = 0;

        int ans = 0;

        int maxFreq = 0;

        int freq[26] = {0};

        while(right < s.length()){
            freq[s[right]-'A']++;

            maxFreq = max(maxFreq, freq[s[right]-'A'] );

            int window = right-left+1;

            int requirement = window - maxFreq;

            while(requirement > k ){
                freq[s[left]-'A']--;

                left++;

                window = right -left +1;

                requirement  = window - maxFreq;
            }

            ans = max(ans, window);

            right++;

        }
        return ans;

        
    }
};