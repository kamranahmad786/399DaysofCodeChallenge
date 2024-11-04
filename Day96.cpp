class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n= nums.size(), k=0;
        for(int i =0; i<n; i++){
            if(!(nums[i] & 1))
               swap(nums[k++], nums[i]);
        }
        return nums;
    }
};
