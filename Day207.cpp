class Solution {
public:
    int numSteps(string s) {
        int ct = 0, id = -1, cr=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                id=i; 
                break;
            }
        }
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='1' && id==i){
                if(cr ==1){
                    ct++;
                }
                break;
            }
            if(s[i]=='1'){
                if(cr==1){
                    ct++;
                }
                else{
                    cr=1;
                    ct+=2;
                }
            }
            else{
                if(cr==1){
                    ct+=2;
                }
                else{
                    ct++;
                }
            }
        }
        return ct;
    }
};
