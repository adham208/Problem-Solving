class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(auto i : strs)
        {
            string s = i;
            sort(s.begin(), s.end());
            map[s].push_back(i);
        }

        vector<vector<string>> res;

        for(auto i : map)
        {
            res.push_back(i.second);
        }

        return res;
        
    }
};