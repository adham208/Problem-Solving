class Solution {
public:
    string truncateSentence(string s, int k) {
        string res="";
        int count = 0;
        for(int i = 0; i<s.size();i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
            if(count == k)
            {
                return res;
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};