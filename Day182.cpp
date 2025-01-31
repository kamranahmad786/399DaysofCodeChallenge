class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s = nums.size();
        int mn = INT_MAX;
        for(int i=0; i<s-1; i++){
            mn = min(abs(nums[i] - nums[i+1]), mn);
        }
        return mn;
    }
};
