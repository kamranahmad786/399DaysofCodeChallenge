class Solution {
public:
    vector<int> numMovesStonesII(vector<int>& stones) {
        sort(stones.begin(), stones.end());
        int n = stones.size();

        int mx_mv = max(stones[n-2] - stones[0]+1-(n-1),
        stones[n-1] - stones[1]+1-(n-1));

        int m_mv = n;
        int lft = 0;

        for(int rt=0; rt<n; rt++){
            while(stones[rt]-stones[lft]+1>n){
                lft++;
            }
            if(rt-lft+1 == n-1 && stones[rt] - stones[lft]+1 == n-1){
                m_mv = min(m_mv,2);
            } else {
                m_mv = min(m_mv, n-(rt-lft+1));
            }
        }
         return {m_mv, mx_mv};
    }
};
