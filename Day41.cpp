class Solution {
public:
    int maxAscendingSum(vector<int>& nums) 
    {
        int c_sum = nums[0];
        int max_sum = 0;
        for(int i=1;i<nums.size();++i)
        {
            if(nums[i-1]<nums[i])
            {
                c_sum += nums[i];
            }
            else
            {
                max_sum = max(max_sum,c_sum);
                c_sum = nums[i];
            }
            
        }  
        max_sum = max(max_sum,c_sum);
        return max_sum;  
    }
};
