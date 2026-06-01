class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0 , bestBuy = prices[0];
        for(int i = 1 ; i < prices.size() ; i++){
            if(bestBuy < prices[i]){
                maxPro = max(maxPro , prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy , prices[i]);
        }
        return maxPro;
    }
};