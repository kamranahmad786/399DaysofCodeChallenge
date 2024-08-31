class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            
            if(i-1>=0 and nums[i]<=nums[i-1])
            {
                c++;
                if(i-2>=0 and nums[i]<=nums[i-2])
                    nums[i]=nums[i-1];
            }
        }
        if(c>1)
            return 0;
        else
            return 1;

    }
};
