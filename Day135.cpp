class Solution {
public:
    string convert(string s, int numRows) {
       if(numRows < 2) 
          return s;
        vector<vector<char>>ans(numRows,vector<char>(s.length(), '0'));
        int r = 0, c=1;
        for(int i=0; i<s.length(); i++){
            ans[r][i] = s[i];
            if(r == numRows-1)
               c = -1;
            if (r == 0)
               c = 1;
               r += c;
        }
        string res = "";
        for(auto i : ans){
            for(auto j : i){
                if(j != '0')
                   res += j;
            }
        }
        return res;
    }
};
