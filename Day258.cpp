class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int cst=0, as =0;
        for(int i=0; i<s.size(); i++){
            cst += abs(s[i]-t[i]);
            if(cst <= maxCost){
                as++;
            } else {
                cst -= abs(s[i-as]-t[i-as]);
            }
        }
        return as;
    }
};
