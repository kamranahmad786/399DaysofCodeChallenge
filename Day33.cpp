class Solution {
public:
    bool check(vector<int>& nums) {
        int c= 0;
        for(int i=0; i<nums.size()-1; i++){
            if(i==0 && nums[nums.size()-1]>nums[i]){
                c++;
            }
            if(nums[i]>nums[i+1]){
                c++;
            }
        }
        if(c>1){
            return false;
        }
        return true;
    }
};
