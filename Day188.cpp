class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        char ch[26];
        for(int i=0; i<26; i++){
            ch[i] = 'a' +i;
        }
        for(int i=0; i<s1.size(); i++){
            char to_rep = max(ch[s1[i]-'a'], ch[s2[i]-'a']);
            char rep_wth = min(ch[s1[i]-'a'], ch[s2[i]-'a']);
            for(int i=0; i<26; i++){
                if(ch[i] == to_rep){
                    ch[i] = rep_wth;
                }
            }
        }
        for(int i=0; i<baseStr.size(); i++){
            baseStr[i] = ch[baseStr[i] -'a'];
        }
        return baseStr;
    }
};
