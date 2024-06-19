class Solution {
public:
    string reversePrefix(string word, char ch) {
        string NewWord;
        int pos = -1;
        for(int i = 0;i<word.size();i++)
        {
            if(word[i]== ch)
            {
                pos = i;
                break;
            }

        }
        if(pos == -1)
        {
            return word;
        }

        for(int i = pos;i>=0;i--)
        {
            NewWord+=word[i];
        }

        for(int i = pos+1;i<word.size();i++)
        {
            NewWord+=word[i];
        }
        return NewWord;
    }
};