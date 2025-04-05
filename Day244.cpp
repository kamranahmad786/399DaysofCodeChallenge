
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int sum = 0;
        vector<int> result;

        for (int num : nums) {
            if (num % 2 == 0) {
                sum += num;
            }
        }

        for (int i = 0; i < queries.size(); i++) {
            int val = queries[i][0];
            int index = queries[i][1];

            if (nums[index] % 2 == 0) {
                
                sum -= nums[index];
            }

            
            nums[index] += val;

            if (nums[index] % 2 == 0) {
               
                sum += nums[index];
            }

            
            result.push_back(sum);
        }

        return result;
    }
};
