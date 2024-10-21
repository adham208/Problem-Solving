class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vec;
        int bar = 0;
        for(int i = 0;i<candies.size();i++)
        {
            bar = max(candies[i],bar);
        }
        for(int i = 0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies)>= bar)
            {
                vec.push_back(true);
            }
            else{
                vec.push_back(false);
            }
        }
        return vec;
    }
};