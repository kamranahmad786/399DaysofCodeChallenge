class Solution {
public:
    int countWays(vector<int>& nums) {

        int n = nums.size();
        int grp = 0;
        int as = 0;

        sort(nums.begin(),nums.end());

        if(nums[0]>0){
            as++;
        }

        for(int i=0; i<n; i++){
            grp++;
            if(grp>nums[i] && (grp<n && nums[grp]>grp)){
                as++;
            }
        }

        if(grp > nums[n-1] && grp == n){
            as++;
        }

        return as;
        
    }
};
