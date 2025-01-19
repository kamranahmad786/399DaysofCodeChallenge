class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size(), prefix_sum = 0, tot_sum = 0;
        vector<int> ans(n);
        for(auto it : nums)
            tot_sum += it;

        for(int i = 0 ; i < n ; i++){
            prefix_sum += nums[i];
            int lft_sum = prefix_sum - nums[i], rgt_sum = tot_sum - prefix_sum;
            int req_sum = (rgt_sum - (n - 1 - i) * nums[i]) + ((i * nums[i]) - lft_sum);
            ans[i] = req_sum;
        }
        return ans;
    }
};
