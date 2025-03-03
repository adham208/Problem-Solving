class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<vector<int>> freq(nums.size()+1);

        for(auto num: nums)
        {
            map[num]++;
        }

        for(auto i : map)
        {
            freq[i.second].push_back(i.first);
        }

        vector<int> res;
        for(int i =freq.size()-1;i>0;i--)
        {
            for(auto num : freq[i])
            {   
                res.push_back(num);
                if(res.size()==k)
                {
                    return res;
                }
            
            }
        }
        return res;
    }
};