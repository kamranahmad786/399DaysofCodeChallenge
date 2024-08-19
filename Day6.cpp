class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool inc = false;
        bool dec = false;

        for (int i=0; i<n-1; i++){
            if(nums[i]< nums[i+1])
            inc = true;
            if(nums[i] > nums[i+1])
            dec = true;
        }

        if(inc == true && dec == true)
            return false;
        return true;
    }
};
