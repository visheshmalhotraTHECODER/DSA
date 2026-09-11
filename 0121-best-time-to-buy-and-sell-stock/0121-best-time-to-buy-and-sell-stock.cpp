class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for(int num : prices){
            minPrice = min(minPrice,num);
            int profit = num - minPrice;
            maxProfit = max(maxProfit, profit);
            
        }
        return maxProfit;
        
    }
};