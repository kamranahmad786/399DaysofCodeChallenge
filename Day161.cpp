class Solution {
public:
    string toBinary(int num) {
        string binary = "";
        while (num > 0) {
            binary = char('0' + (num % 2)) + binary; 
            num /= 2;
        }
        return binary;
    }

    
    bool isSubstring(const string& s, const string& sub) {
        int m = s.size(), n = sub.size();
        for (int i = 0; i <= m - n; ++i) {
            bool match = true;
            for (int j = 0; j < n; ++j) {
                if (s[i + j] != sub[j]) {
                    match = false;
                    break;
                }
            }
            if (match) return true;
        }
        return false;
    }

    
    bool queryString(string s, int n) {
        for (int i = 1; i <= n; ++i) {
            string binary = toBinary(i); 
            if (!isSubstring(s, binary)) { 
                return false;
            }
        }
        return true;
    }
};
