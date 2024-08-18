class Solution {
public:
    bool isPalindrome(int x) {
       string num = to_string(x);
       int len = num.size();

       int left = 0;
       int right = len -1;
       
       while(left<num.size())
       {
            if(num[left] !=num[right])
            {
                return false;
            }
            left++;
            right--;
       }
       return true;
    }
};