class Solution {
public:
    long long countSubstrings(string s, char c) {
        int n = s.size();
        long long a = 0;
        for(int i=0; i<n; i++){
            if(s[i] == c) a++;
        }
        long long b=(a*(a-1))/2;
        return b+a;
    }
};
