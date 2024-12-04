class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int a=0;
        int b=0;
        if(str1.size() < str2.size())
          return false;
        while (b<str2.size()){
            if(str1[a] == str2[b] || (str1[a]+1-97)%26 == (str2[b]-97)%26){
                a++;
                b++;
            } else {
                a++;
            }
            if(b <str2.size() && a>= str1.size())
              return false;
        }
        return true;
    }
};
