class Solution {
public:
    int countBinarySubstrings(string s) {
        int let1 = 1, rd1 = 0, rd2 = 0;
        int ans = 0;
        while (rd2 < s.size()) {
            let1 = rd1;
            rd1 = rd2;            
            while (rd2 < s.size() && s[rd2] == s[rd1]) {
                rd2++;
            }
            ans += min(rd1-let1, rd2-rd1);
        }
        return ans;
    }
};
