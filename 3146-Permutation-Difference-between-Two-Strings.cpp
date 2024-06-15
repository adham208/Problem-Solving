class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> map;

        for(int i = 0;i<s.size();i++)
        {
            map[s[i]]=i;
        }
        int result =0;
        for(int i = 0;i<t.size();i++)
        {
            result+=abs(i-map[t[i]]);
        }
        return result;
    }
};