class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(),nums.end());
        int x=nums[0], i;
        for(i=1; i<n; i++){
            x = x^nums[i];
            if(x==0) break;
            else x=nums[i];
        }
        return nums[i];
    }
};
