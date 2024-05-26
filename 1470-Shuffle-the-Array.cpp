class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;

        

        for(int i = 0; i<n;++i)
        {
            int first = nums[i];
            int second = nums[n+i];
            result.push_back(first);
            result.push_back(second);
            
        }
        return result;
    }
};