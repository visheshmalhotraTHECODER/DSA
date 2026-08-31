class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int buy = prices[0];
        int profit  = 0 ;
        
        for(int i=1 ;i<n ;i++){
            if(prices[i]<buy){
                buy = prices[i];
            }

            if(prices[i]>buy +fee){

            profit += prices[i] - buy-fee ;

            buy = prices[i] - fee;
        }
    }
        return profit;
    }
};