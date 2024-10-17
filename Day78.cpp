class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>wrd;
        for(int i=0; i<queries.size(); i++){
            for(int j=0; j<dictionary.size(); j++){
                int cnt=0;
                for(int k=0; k<dictionary[j].size(); k++){
                    if(queries[i][k]!=dictionary[j][k]){
                        cnt++;
                    }
                }
                if(cnt<=2){
                wrd.push_back(queries[i]);
                break;
                }

            }

        }

        return wrd;
    }
};
