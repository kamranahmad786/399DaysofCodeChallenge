class Solution {
public:
    string minimizeResult(string s) {
        int n = s.size(), p = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '+') {
                p = i;
                break;
            }
        }
        
        int minVal = INT_MAX;
        string ans;
        
        for (int l = 0; l < p; ++l) {
            for (int r = p + 2; r <= n; ++r) {
                int a = 1, b = stoi(s.substr(l, p - l)), c = stoi(s.substr(p + 1, r - p - 1)), d = 1;
                
                if (l > 0) a = stoi(s.substr(0, l));
                if (r < n) d = stoi(s.substr(r));
                
                int val = a * (b + c) * d;
                
                if (val < minVal) {
                    minVal = val;
                    ans = s.substr(0, l) + "(" + s.substr(l, r - l) + ")" + s.substr(r);
                }
            }
        }
        
        return ans;
    }
};
