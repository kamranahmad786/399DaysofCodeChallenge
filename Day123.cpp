class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int start=0,end=nums.size()-1,count=0;
        while(start < end)
        {
            if(nums[start]+nums[end] < target)
            {
                count=count+end-start;
                start++;
            }
            else
            end--;
        }
        return count;
    }
};
