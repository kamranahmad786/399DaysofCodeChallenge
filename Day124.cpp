class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int x, m_left;
        for(int i=0; i<n; i++){
            x = n - i;
            m_left = (i - 1 >= 0) ? nums[i-1] : 0;
            if ((nums[i] >= x) && (x > m_left)){
                return x;
            }
        }
        return -1;
    }
};
