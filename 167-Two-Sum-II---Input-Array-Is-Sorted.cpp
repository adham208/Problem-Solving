class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r = numbers.size()-1;
        int l = 0;

        while(l<r)
        {
            if(target> numbers[l]+numbers[r])
            {
                l++;
            }
            else if(target< numbers[l]+numbers[r])
            {
                r--;
            }
            else{
                return {l+1,r+1};
            }
        }
        return{};
    }
};