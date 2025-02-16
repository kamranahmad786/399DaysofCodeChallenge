class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int a = 0;
        int b = n - 1;
        while(a < b){
            if(s[a] == s[b]){
                char c = s[a];
                while(a < n && s[a] == c) a++;
                while(a < b && s[b] == c) b--;
            }
            else 
            break;
        } return b - a + 1;
    }
};
