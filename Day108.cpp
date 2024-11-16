class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        for(int i=1; i<n; i++){
            if(nums[i] != nums[idx]){
                nums[idx+1] = nums[i];
                idx++;
            }
        }
        return idx+1;
    }
};
