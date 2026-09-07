class Solution {
public:
    int solve(int n, vector<int>& t) {
        if (n < 2) {
            return 1;
        }
        if (t[n] != -1) {
            return t[n];
        }

        return t[n] = solve(n - 1, t) + solve(n - 2, t);
    }

    int climbStairs(int n) {
        vector<int> t(n + 1, -1);

        return solve(n, t);
    }
};