class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> jhola;

        for (int num : nums) {
            jhola.insert(num);
        }
        int longest = 0;

        for (int num : jhola) {
            if (jhola.find(num - 1) == jhola.end()) {
                int current = num;
                int count = 1;

                while (jhola.find(current + 1) != jhola.end()) {
                    current++;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};