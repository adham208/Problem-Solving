class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int richest = 0;

        for(int i = 0;i<accounts.size();i++)
        {
            int s =0;
            for(int j=0;j<accounts[i].size();j++)
            {
                s +=accounts[i][j]; 
            }
            if(s>richest)
            {
                richest = s;
            }
        }

        return richest;
    }
};