class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int inspos = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0) nums[inspos++] = nums[i];  
        }
        for(int i=inspos; i<nums.size(); i++) nums[i]=0;
    }
};
