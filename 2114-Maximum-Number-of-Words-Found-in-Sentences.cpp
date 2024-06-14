class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count1 =  0;
        for(int i =0;i<sentences.size();i++)
        {
            int count2  = 1;
            for(int j = 0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                {
                    count2++;
                }
            }

            if(count2>count1)
            {
                count1=count2;
            }
        }
        return count1; 
    }
};