class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int st=0;
        int m_cnt=0;
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                cnt++;
            if(i-st+1==k)
            {
                if(m_cnt<cnt)
                    m_cnt=cnt;
                if(s[st]=='a'|| s[st]=='e' || s[st]=='i' || s[st]=='o' || s[st]=='u')
                    cnt--;
                st++;
            }
        }
        return m_cnt;
    }
};
