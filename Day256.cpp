class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int as = 0, strt = 0, cnt_T = 0, cnt_F = 0;
        for(int ed = 0; ed < answerKey.size(); ed++){
            if(answerKey[ed] == 'T')
              cnt_T++;
            else
               cnt_F++;
            while(min(cnt_T, cnt_F)>k){
                if(answerKey[strt] == 'T')
                   cnt_T--;
                else
                   cnt_F--;
                strt++;
            }
            as = max(as, ed-strt+1);
        }
        return as;
    }
};
