class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int close = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(abs(nums[i])<abs(close) || (abs(nums[i]) == abs(close) && nums[i]>close)){
                close=nums[i];
            }
        }
        return close;
    }
};
