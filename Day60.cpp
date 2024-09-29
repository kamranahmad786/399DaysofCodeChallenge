class Solution {
public:
    char slowestKey(vector<int>& r, string k) {
        int diff=r[0],j=0;
        for(int i=1;i<r.size();i++)
        {
            int cdiff=r[i]-r[i-1];
            if(cdiff>diff)
            {
                diff=cdiff;
                j=i;
            }
            else if(cdiff==diff)
            {
                int z=j;
                if(k[z]>k[i])
                {
                    j=z;
                }
                else
                {
                    j=i;
                }

            }
        }
        return k[j];
    }
};
