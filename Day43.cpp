class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int p=nums[0], c = 0;
        for(int i=1; i<nums.size()-1;i++){
            if (nums[i] != p && nums[i] !=nums[i+1]){
                if (p >nums[i] && nums[i+1] > nums[i] || p <nums[i] && nums[i+1] <nums[i]){
                    c++;
                }
                p = nums[i];
            }
        }
        return c;
    }
};
