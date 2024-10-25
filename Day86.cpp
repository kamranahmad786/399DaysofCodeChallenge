class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        vector<char>vec(26,'0');
        for(int i=0;i<26;i++){
            char ch='a'+i;
            vec[i]=ch;
        }
        for(int i=shifts.size()-2;i>=0;i--){
            shifts[i]+=shifts[i+1]%26;
        } 
       int i=0;
       while(i<s.size()){
          int ind=(s[i]-'a'+shifts[i])%26;
          s[i]=vec[ind];
          i++;
       }
       return s;
       
    
    }
};
