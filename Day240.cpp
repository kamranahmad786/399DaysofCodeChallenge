class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> ans(s.size());
        for(int i=0; i<s.size(); i++){
            int c=0;
            int row=startPos[0];
            int col=startPos[1];
            for(int j=i; j<s.size(); j++){
                if(s[j]=='L')
                    col--;
                else if(s[j]=='R')
                    col++;
                else if(s[j]=='U')
                    row--;
                else
                    row++;
                if(row<0 || col <0 || row >=n || col>=n){
                    break;
                }
                c++;
            }
            ans[i]=c;
        }
        return ans;
    }
};
