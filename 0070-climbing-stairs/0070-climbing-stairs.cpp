class Solution {
public:
    int solve(vector<int> &t, int n){
        if(n<=2){
            return n;
        }
        if(t[n]!= -1){
            return t[n];
        }
        return t[n] = solve(t, n-1)+solve(t,n-2); 
        
    }
    int climbStairs(int n) {
        vector<int>t(n+1,-1);

        return solve(t, n);
    }
};