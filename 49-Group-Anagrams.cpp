class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(int i = 0;i<strs.size();i++)
        {
            string st = strs[i];
            sort(st.begin(),st.end());
            map[st].push_back(strs[i]);
        }

        vector<vector<string>> res;
        for(auto i: map)
        {
            res.push_back(i.second);
        }
        return res;

    }
};