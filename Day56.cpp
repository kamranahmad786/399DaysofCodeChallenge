class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int n = words.size();
        vector<string>ans; 
        for(auto it : words){
            string temp;
            for(int j = 0; j < it.length(); j++){
                if(it[j] == separator){
                    ans.push_back(temp);
                    temp = "";
                }
                else{
                    temp += it[j];
                }
            }
            ans.push_back(temp);
        }
        vector<string> ans2;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] != "") ans2.push_back(ans[i]);
        }
        return ans2;
    }
    
};
