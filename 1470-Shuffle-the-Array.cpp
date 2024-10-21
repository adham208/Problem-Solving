class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int left = 0;
        int right = n;
        vector<int> res;
        for(int i = 0;i<n;i++){
            res.push_back(nums[left]);
            res.push_back(nums[right]);
            left++;
            right++;

        }
        return res;
    }
};