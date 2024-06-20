class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0;i<words.size();i++)
       {
            bool flag = true;
            int l = words[i].size()-1; 
            for(int j = 0;j<words[i].size();j++){
                if(words[i][j]!=words[i][l])
                {
                    flag = false;
                    break;
                }
                l--;
            }
            if(flag)
            {
                return words[i];
            }
       }
       return "";
    }
       
};