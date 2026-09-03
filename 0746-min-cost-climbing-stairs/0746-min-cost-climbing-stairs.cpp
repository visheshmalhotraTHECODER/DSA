class Solution {
public:

    int solve(vector<int> &t , vector<int>& cost, int n){

        if(n<=1){
            return 0;
        }
       
        if(t[n]!= -1){
            return t[n];
        }
        return t[n] = min(
            cost[n-1]+solve(t,cost, n-1),
            cost[n-2]+solve(t,cost, n-2));

    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        vector<int>t(n+1,-1);

        return solve(t, cost , n);
    }
};