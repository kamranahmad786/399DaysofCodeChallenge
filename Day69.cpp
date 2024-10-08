class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxlen=0;
        for(int i=0;i<strs.size();i++)
        {
            int len = strs[i].size();
            string a = strs[i];
            int count = 0;
            for(int j=0;j<len;j++)
            {
                if(isdigit(a[j]))
                {
                    count++;
                }
            }
            int c=0;
            if(count==len)
            {
                c=stoi(a);
            }
            else
            {
                c=len;
            }
            maxlen = max(maxlen,c);
        }
        return maxlen;
    }
};
