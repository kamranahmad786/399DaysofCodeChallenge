class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> wrds;
        string word;
        for(char c : s){
            if (c == ' '){
                if (!word.empty()){
                    wrds.push_back(word);
                    word.clear();
                }
            }else {
                word +=c;
            }
        }
        if(!word.empty()){
            wrds.push_back(word);
        }
        int n=0;
        for(const auto& str : wrds){
            n = max(n, static_cast<int>(str.size()));
        }
        vector<string> result(n, "");
        for(int i=0; i<n; ++i){
            for(const auto& word : wrds){
                if(i< word.size()){
                    result[i] += word[i];
                } else {
                    result[i] += ' ';
                }
            }
            while(!result[i].empty() && result[i].back() == ' '){
                result[i].pop_back();
            }
        }
    return result;
    }
};
