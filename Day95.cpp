class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int product1, product2;
        sort(nums.begin(), nums.end());
        product1 = nums[nums.size()-1] * nums[nums.size()-2] * nums[nums.size()-3];
        product2 = nums[nums.size()-1] * nums[0] *nums[1];
        return max(product1, product2);
    }
};
