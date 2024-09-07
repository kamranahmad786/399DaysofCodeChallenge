class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int plus = 1, minus = 1, m = 1;
        for (int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[i - 1]){ 
                plus++; minus = 1;
            }
            else if(nums[i] < nums[i - 1]){
                 minus++; plus = 1;
            }
            else {
                plus = 1; minus = 1;
            }

            m = max(m, max(plus, minus));
        }
        return m;
    }
};
