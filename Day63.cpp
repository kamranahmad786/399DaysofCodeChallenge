class Solution {
public:
    string truncateSentence(string s, int k) {
        int space_count=0;
        string ans;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                space_count++;
            }
             if(space_count==k){
                break;
            }     
            ans.push_back(s[i]);
        }
        return ans;
    }
};
