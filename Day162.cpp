class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0, mn = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            mn = min(mn,nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            ans += (nums[i] - mn);
        }
        return ans;
    }
};
