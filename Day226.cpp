class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        
        int n = nums.size();
        long long tck = 0;
        int m_l = 1;
        int lt = 0;

        for(int rt=0; rt<n; rt++){
            while((tck&nums[rt])!= 0) {
                tck -= nums[lt];
                lt++;
            }
            tck += nums[rt];
            m_l = max(m_l, rt-lt+1);
        }
        return m_l;
    }
};
