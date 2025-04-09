class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        int t_ones = 0;

        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) t_ones++;
        }

        int l_zrs = 0, r_ons = t_ones;
        int m_scr = -1;
        vector<int> res;

        for (int i = 0; i <= n; ++i) {
            int scr = l_zrs + r_ons;
            if (scr > m_scr) {
                m_scr = scr;
                res.clear();
                res.push_back(i);
            } else if (scr == m_scr) {
                res.push_back(i);
            }

            if (i < n) {
                if (nums[i] == 0) l_zrs++;
                else r_ons--;
            }
        }

        return res;
    }
};
