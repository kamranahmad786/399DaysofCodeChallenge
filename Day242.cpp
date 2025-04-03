class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>r;
        string st = "";

        for(char& ch : target){
            st += '.';
            for(char t = 'a'; t <= ch; t++){
                st.back() = t;
                r.push_back(st);
            }
        }
        return r;
    }
};
