class Solution {
public:
    string sortSentence(string s) {
       string wrd ="";
       vector<string> v(10);
       for(int i=0; i<s.size(); i++){
        if(s[i] >= 48 && s[i] <= 57){
            v[s[i] - 48] = wrd + " ";
            wrd = "";
            i++;
        }
        else{
            wrd = wrd + s[i];
        }
      } 
      string ans;
      for(string x:v){
        ans = ans + x;
      }
      ans.pop_back();
      return ans;
    }
};
