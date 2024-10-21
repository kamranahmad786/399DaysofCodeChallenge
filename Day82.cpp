class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
        vector<string> res;
        bool isBlock = false;
        bool isLine = false;
        string r = "";
        for (int i = 0; i < source.size(); i++) {
            string src = source[i];
            int n = src.size();
            for (int j = 0; j < n;) {
                if (src[j] == '/' && (j+1 < n && src[j+1] == '*') && !isLine && !isBlock) {
                    isBlock = true;
                    j = j+2;
                    continue;
                } else if (src[j] == '/' && (j+1 < n && src[j+1] == '/') && !isBlock) {
                    isLine = true;
                } else if (!isBlock && !isLine){
                    r+= src[j];
                } else if (src[j] == '*' && (j+1 < n && src[j+1] == '/')) {
                    isBlock = false;
                    j = j+2;
                    continue;
                }
                j++;
            }
            if(r.size() && !isBlock) {
                res.push_back(r);
                r.clear();
            }
            isLine = false;
        }
        return res;
    }
};
