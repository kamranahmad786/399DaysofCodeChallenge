class Solution {
public:
    string compressedString(string word) {
        int cnt=1;
        char let=word[0];
        string w="";
        for(int i=1;i<word.size();i++){
            if(word[i]==word[i-1]){
                cnt++;
            }
            else{
                while(cnt>9){
                    w+='9';
                    w+=let;
                    cnt-=9;
                }
                w+=to_string(cnt);
                w+=let;
                let=word[i];
                cnt=1;
            }
        }
        while(cnt>9){
            w+='9';
            w+=let;
            cnt-=9;
        }
        w+=to_string(cnt);
        w+=let;
        return w;
    }
};
