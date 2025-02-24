class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        int res = 0;
        for(int i : set)
        {
            if(set.find(i-1)==set.end())
            {
                int longest = 1;
                while(set.find(i+longest)!=set.end())
                {
                    longest++;
                }
                res = max(res,longest);
            }
            
        }
        return res;
    }
};