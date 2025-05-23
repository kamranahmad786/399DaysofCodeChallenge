class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string lt = s.substr(0, n/2);

        sort(lt.begin(), lt.end());
        string rt = lt;

        reverse(rt.begin(), rt.end());
        string r = "";

        if(n%2 == 0) r = lt+rt;
        else r = lt+s[n/2] + rt;
        return r;
    }
};
