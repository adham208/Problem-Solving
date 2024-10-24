class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 0;
        int maxP = 0;

        while(right<prices.size())
        {
            maxP = max(maxP,prices[right]-prices[left]);

            if(prices[right]<prices[left]){
                left = right;
            }
            right++;
        }
        return maxP;
    }
};