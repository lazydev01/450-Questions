class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minMoney = 2147483647;
        int maxProfit = -1;
        for(int i=0; i<prices.size();i++){
            if(minMoney>prices[i]){
                minMoney = prices[i];
            }
            int profit = prices[i] - minMoney;
            if(profit>maxProfit){
                maxProfit = profit;
            }
        }
        return maxProfit;
        
    }
};
