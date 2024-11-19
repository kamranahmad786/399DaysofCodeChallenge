class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference,
                            int valueDifference) {
        vector<int> ans;
        bool flag;
        int n = nums.size(), i = 0, j = 0;
        if (indexDifference == 0 and valueDifference == 0) {
            return {0, 0};
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((abs(i - j) >= indexDifference) and
                    (abs(nums[i] - nums[j]) >= valueDifference)) {
                    flag = true;
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                } else {
                    flag = false;
                }
            }
            if (flag)
                break;
        }
        if (flag) {
            return ans;
        } else {
            return {-1, -1};
        }
    }
};
