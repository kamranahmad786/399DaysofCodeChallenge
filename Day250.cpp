class Solution {
public:
    int chalkReplacer(vector<int>& chlk, int k) {
        long long sm = 0;
        for(int i=0; i < chlk.size(); i++){
            sm += chlk[i];
        }
        k = k % sm;
        if(k == 0){
            return 0;
        }

        int i =0;
        while (i < chlk.size()){
            if(k < chlk[i]){
                return i;
            }
            else {
                k -= chlk[i];
                i++;
            }
        }
        return 0;
    }
};
