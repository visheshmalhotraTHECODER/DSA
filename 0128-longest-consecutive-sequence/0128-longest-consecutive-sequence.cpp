class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> jhola;

        for (int num : nums) {
            jhola.insert(num);
        }
        int ans = 0;

        for (int num : jhola) {

            if (jhola.find(num - 1) == jhola.end()) {

                int currentElement = num;

                int currentLength = 1;

                while (jhola.find(currentElement + 1) != jhola.end()) {
                    currentElement++;
                    currentLength++;
                }
                ans = max(ans, currentLength);
            }
        }
        return ans;
    }
};