class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s = countAndSay(n-1);

        string tp = "";
        int cnt = 0;
        char ch = s[0];
        for(int i=0; i<s.size(); i++){
            if(s[i]==ch){
                cnt++;
            }
            if(s[i]!=ch){
                tp += to_string(cnt) + ch;
                ch=s[i];
                cnt=1;
            }
        }
        tp += to_string(cnt) + ch;

        return tp;
    }
};
