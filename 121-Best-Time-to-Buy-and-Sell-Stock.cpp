class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int right = 1;
        int left = 0;
        int maxProfit =0;
        while(right<=prices.size()-1){
            if(prices[left]<prices[right])
            {
                int profit = prices[right]-prices[left];
                maxProfit = max(maxProfit,profit); 
            }else{
                left = right;
            }
            right++;

        }
        return maxProfit;
    }
};