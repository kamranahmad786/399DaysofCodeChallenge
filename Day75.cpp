class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>v;
        int n=0,max=s.size();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                v.push_back(n);
                n++;
            }
            else if(s[i]=='D')
            {
                v.push_back(max);
                max--;
            }
        }
        if(s[s.length()-1]=='D')
        {
            v.push_back(max);
        }
        else
        {
            v.push_back(n);
        }
        return v;
    }
};
