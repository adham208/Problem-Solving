class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        unordered_map<char,char> map={
            {')','('},
            {'}','{'},
            {']','['}
        };

        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                st.push(s[i]);
            }
            else if(map.count(s[i])){
                if(st.empty()||st.top()!=map[s[i]])
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};