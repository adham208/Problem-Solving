class Solution {
public:
    bool isPalindrome(string s) {
        string n = \\;
        for(int i = 0;i<s.length();i++)
        {
            if(isalnum(s[i])){
                n+=tolower(s[i]);
            }
        }
        int right = 0;
        int left = n.length()-1;

        while(right <= left)
        {
            if(n[right]!=n[left])
            {
                return false;
            }
            right++;
            left--;
        }
        return true;
    }
};