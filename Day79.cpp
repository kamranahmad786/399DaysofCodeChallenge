class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> div;
        long val=0;
        for(int i=0;i<word.length();i++)
        { 
           val=val*10;
           val=val+(word[i]-'0');
           val%=m;
            if(val%m==0)
            {
                div.push_back(1);
            }
            else
            {
                div.push_back(0);  
            }
        }
        return div;
    }
};
