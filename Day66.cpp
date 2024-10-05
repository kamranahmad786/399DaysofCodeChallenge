class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_len=0 ;
        for(int i=0 ; i<sentences.size() ; i++){
            int c=0;
            for(int j=0 ; j<sentences[i].size() ; j++){
                if(sentences[i][j]==' ') 
                c++;
            }
            max_len=max(max_len,c+1);
        }
        return max_len;
    }
};

