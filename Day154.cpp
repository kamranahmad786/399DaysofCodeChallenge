class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int  n = nums.size(), idx = 1;
       for(int i=2; i<n; i++){
        int crntNum = nums[i];
        if(crntNum == nums[idx] && crntNum == nums[idx - 1])
        continue;
        nums[++idx] = nums[i];
       }
       return n < 2 ? n : idx + 1;
    }
};
