class Solution {
public:
    int balancedStringSplit(string s) {
        int rs = 0;
        int ls = 0;
        int res = 0;
        for (int i = 0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                rs++;
            }
            if(s[i]=='L')
            {
                ls++;
            }

            if(rs == ls && rs != 0)
            {
                res++;
            }
        }
        return res;
    }
};