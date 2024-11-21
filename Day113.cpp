class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int i=0;
        int j=0;
        string ans="";
        bool flg=true;
        while(i<word1.size() || j<word2.size()){

            if(i>=word1.size()){
                ans +=word2[j++];
            }
            else if(j>=word2.size()){
                ans +=word1[i++];
            }
            else{
                if(flg){
                    ans +=word1[i++];
                    flg=!flg;
                }
                else{
                    ans +=word2[j++];
                    flg=!flg;
                }

            }
        }
        return ans;
    }
};
