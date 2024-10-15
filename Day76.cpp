class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        int n = pref.size();
        for(int i=0; i<words.size(); i++){
            auto a=words[i].substr(0,n);
            if(a == pref)
            cnt++;
        }
        return cnt;
    }
};
