class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
       string as="";
       int j = 0;
       for(int i = 0; i<s.length(); i++){
        if(i == spaces[j]){
            as+= ' ';
            if(j<spaces.size()-1) j++;
        }
        as+= s[i];
       }
       return as; 
    }
};
