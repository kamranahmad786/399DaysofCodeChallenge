class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int c=0, j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i % nums.size()] > nums[(i + 1) % nums.size()]){
                if(c >= 1)
                return -1;
                c=1;
                j=i;
            }
        }
        return nums.size()-1-j;
    }
};
