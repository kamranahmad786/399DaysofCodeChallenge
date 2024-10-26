class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<pair<string,string>> letter;
        vector<pair<string,string>> digit;
        bool flag=false;
        for(int i=0;i<logs.size();i++){
            string s="";
            string t="";
            for(int j=0;j<logs[i].size();j++){
                if(logs[i][j]==' ' && flag==false){
                    flag=true;
                    continue;
                }
                if(flag==false){
                    s+=logs[i][j];
                }
                else
                t+=logs[i][j];
            }
            flag=false;
            if(isalpha(t[0])){
                letter.push_back({s,t});
            }
            else{
                digit.push_back({s,t});
            }
            s="";
            t="";
        }

        sort(letter.begin(), letter.end(), [](const pair<string, string>& a,    const pair<string, string>& b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second < b.second;
        });

        vector<string>ans;

        for(int i=0;i<letter.size();i++){
            ans.push_back(letter[i].first+" "+letter[i].second);
        }
        for(int i=0;i<digit.size();i++){
            ans.push_back(digit[i].first+ " "+digit[i].second);
        }

        return ans;
        
    }
};
