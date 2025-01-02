class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;

        while(right<prices.size())
        {
            maxProfit = max(maxProfit,prices[right]-prices[left]);
            if(prices[right]<prices[left])
            {
                left = right;
            }
            right++;
        }
        return maxProfit;
    }
};