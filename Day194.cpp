class Solution {
public:
    int longestContinuousSubstring(string s) {
       int rs = 1;
       for(int i=0 , j, len=s.size()-1; i<len;){
        j = i;
        while(j < len && s[j + 1] - s[j] ==1) j++;
        rs = max(rs, j - i+1);
        i = j + 1;
       } 
       return rs;
    }
};
