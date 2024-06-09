class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        if(money == 0)
            {
                return 0;
            }
        sort(prices.begin(), prices.end());
        if(money> prices[0]+prices[1])
        {
            return money-(prices[0]+prices[1]);
        }

        if(money-(prices[0]+prices[1])==0)
        {
            return 0;
        }

        return money;
    }
};