class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num_map;

        for(int i = 0; i< nums.size();i++)
        {
            int complement = target - nums[i];
            if(num_map.find(complement)!= num_map.end())
            {
                return {num_map[complement],i};
            }
            num_map.insert({nums[i],i});
        }
        return {};
    }
};