class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       unordered_map<int,int> map;
       int result=0;
       for(auto i: nums)
       {
            map[i]++;
       }

       int maxFreq = 0;

       for(auto i : map)
       {
            if(i.second>maxFreq)
            {
                maxFreq=i.second;
            }
       }

       for(auto i:map)
       {
            if(i.second == maxFreq)
            {
                result+=i.second;
            }
       }
       return result;
    
    }
};