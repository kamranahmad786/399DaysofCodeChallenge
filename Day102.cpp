class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double x = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() / 2; i++) {
            x = min(x, (nums[i] + nums[nums.size() - 1 - i]) / 2.0);
        }
        return x;
    }
};
