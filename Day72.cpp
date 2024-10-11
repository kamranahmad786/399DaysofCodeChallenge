class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int j = 0;
        for (int i = 0; i < words.size(); i++) {
            int k = 0;
            while (k < words[i].size()) {
                if (words[i][k] == s[j]) {
                    if (j == s.size() - 1 && k == words[i].size() - 1) return true;
                    k++; 
                    j++;
                } else {
                    return false;
                }
            }
        }
        return false;
    }
};
