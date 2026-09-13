class Solution {
public:
    int solve(int n, vector<int>& t ){ 

        if(n<=1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        if(t[n]!= -1){
            return t[n];
        }
        
        t[n] = solve(n-1, t)+solve(n-2, t);

        return t[n];
    }
    int climbStairs(int n) {

        vector<int> t(n+1,-1);

        return solve(n,  t);
        
    }
};