class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int result = nums.size()/2;
        int answer = 0;
        for(auto i : nums)
        {
            map[i]++;
        }

        for(auto a:map)
        {
            if(a.second>result)
            {
                answer = a.first;
            }
        }
        return answer;
    }
};
