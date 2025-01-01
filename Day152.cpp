class Solution {
public:
    string arrangeWords(string text) {
        string str="";
        map<int,vector<string>>x;
        for(int i=0; i<text.size(); i++){
            if(text[i] != ' ')
              str+=tolower(text[i]);
            else{
                x[str.size()].push_back(str);
                str="";
            }
        }
        x[str.size()].push_back(str);
        string as="";
        for(auto i:x){
            for(int j=0; j<i.second.size(); j++){
                as+= i.second[j];
                as+=' ';
            }
        }
        as.pop_back();
        as[0]=toupper(as[0]);
        return as;
    }
};
