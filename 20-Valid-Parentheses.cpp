class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> map = {
            {')','('},
            {']','['},
            {'}','{'}
        };
        stack<char> st;

        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                st.push(s[i]);
            }
            else if(map.count(s[i]))
            {
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