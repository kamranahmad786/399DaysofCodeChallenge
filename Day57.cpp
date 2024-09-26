class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string a = s;
        for (int i = 0; i<s.size(); i++){
            a[indices[i]] = s[i];
        }
        return a;
    }
};
