class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int first = nums[0];
        int differ = 0;
        for (int i = 1;i<nums.size();i++){
            if (first > nums[i]){
                first = nums[i];
            }
            else if (nums[i] - first > differ){
                differ = nums[i] - first;
            }
        }
        if (differ == 0){
            return -1;
        }
        else{
            return differ;
        }
    }
};
