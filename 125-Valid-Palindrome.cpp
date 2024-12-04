class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left<right){
            while(left<right && !isalnum(s[left]))
            {
                left++;
            }
            while(right>left&& !isalnum(s[right]))
            {
                right--;
            }
            if(tolower(s[right])!=tolower(s[left]))
            {
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};