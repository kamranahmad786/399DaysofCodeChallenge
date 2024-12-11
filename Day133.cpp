class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int len = 0;
        int l = 0, r = 0;
        while(r < nums.size()) {
            if(nums[r]-nums[l] <= 2*k) {
                len = max(len, r-l+1);
            } else {
                l++;
            }
            r++;
        }
        return len;
    }
};
