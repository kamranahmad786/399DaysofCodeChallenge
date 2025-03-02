class Solution {
public:
    int maxProduct(vector<string>& wrd) {
        vector<int>res(wrd.size(),0);
        for(int i=0; i<wrd.size(); i++){
            for(int j=0; j<wrd[i].size(); j++){
                int crnt = wrd[i][j] - 'a';
                res[i] |= (1 << crnt);
            }
        }
        int as = 0;
        for(int i=0; i<wrd.size(); i++){
            for(int j=i+1; j<wrd.size(); j++){
                int crnt = wrd[i].size()*wrd[j].size();
                if(crnt>as && !(res[i] & res[j]))
                   as = crnt;
            }
        }
        return as;
    }
};
