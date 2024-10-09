class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>present_char;
        for(int i=0;i<s.length();i++){
            if(s[i]==c)present_char.push_back(i);
        }
        vector<int>ans(s.length());
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                ans[i]=0;
            }
            else{
                int val=INT_MAX;
                for(int k=0;k<present_char.size();k++){
                    val=min(val,abs(i-present_char[k]));
                }
                ans[i]=val;
            }
        }
        return ans;
    }
};
