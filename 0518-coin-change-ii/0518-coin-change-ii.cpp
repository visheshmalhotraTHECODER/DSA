class Solution {
public:
    int t[301][5001];
    int n;
    int solve(int i , int amount, vector<int>& coins){

        if(amount==0){
            return  1;
        }
        if(i==n){
            return 0;
        }
        if(t[i][amount]!=-1){
            return t[i][amount];
        }
        if(coins[i]>amount){
            return t[i][amount]=solve(i+1, amount, coins);
        }
        return t[i][amount] =solve(i, amount-coins[i], coins)+solve(i+1, amount, coins);
    }
    int change(int amount, vector<int>& coins) {
        n = coins.size();

        memset(t ,-1, sizeof(t));

        return solve(0, amount , coins);
        
    }
};