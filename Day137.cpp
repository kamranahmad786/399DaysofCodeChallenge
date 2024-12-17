class Solution {
public:
    long long shiftDistance(string s, string t, vector<int>& nextCost, vector<int>& previousCost) {
        vector<long long> pre(26,0);
        vector<long long> post(26,0);
        pre[0]=nextCost[0];
        for(long long i=1;i<26;i++)
            {
                pre[i]=pre[i-1]+nextCost[i];
            }
        post[25]=previousCost[25];
        for(long long i=24;i>=0;i--)
            {
                post[i]=post[i+1]+previousCost[i];
            }

        long long n=s.size();
        long long sm=0;
        for(long long i=0;i<n;i++)
            {
                long long from=s[i]-'a';
                long long to=t[i]-'a';

                if(to>=from)
                {
                    long long cost1=pre[to]-pre[from]-nextCost[to]+nextCost[from];
                    long long cost2=post[0]-post[from]+previousCost[from]+post[to]-previousCost[to];
                    sm+=min(cost1,cost2);
                }
                else{
                    long long cost1=post[to]-post[from]+previousCost[from]-previousCost[to];
                    long long cost2=pre[25]-pre[from]+nextCost[from]+pre[to]-nextCost[to];
                    sm+=min(cost1,cost2);
                }
            }
        return sm;
    }
};
