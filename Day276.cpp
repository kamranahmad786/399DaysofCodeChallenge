class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int min_len=INT_MAX;
        int i=0,j=0,sm=0;
        while(j<n){
            sm+=nums[j];
            while(sm>=target){
                min_len=min(min_len,j-i+1);
                sm-=nums[i];
                i++;
            }
            j++;
        }
        return min_len==INT_MAX?0:min_len;
    }
};
