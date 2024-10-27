class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        int l=s.length();
        int count=0;
        for(string word:words){
            int k=word.length();
            int i=0,j=0;
            bool stretchy=true;
            while(i<l and j<k){
                char curr=word[j];
                if(s[i]!=curr){
                    stretchy=false;
                    break;
                }
                else{
                    int lenS=0,lenW=0;
                    while(i<l and s[i]==curr){
                        lenS++;i++;
                    }
                    while(j<k and word[j]==curr){
                        lenW++;j++;
                    }
                    if((lenS<lenW) or (lenS!=lenW and lenS<3)){
                        stretchy=false;
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
            if(stretchy and i==l and j==k) count++;
        }
        return count;
    }
};
