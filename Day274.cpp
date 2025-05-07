class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_i=INT_MIN;
        int maxi_1=INT_MIN;
       for(int i=0;i<nums.size();i++)
       {
        max_i=max(max_i,nums[i]);
       } 
       int cnt=0;
       for(int i=0;i<nums.size();i++)
       {
        if( nums[i]==max_i)
        {
            cnt++;
        }
        else{
           maxi_1=max(maxi_1,cnt);
           cnt=0;
        }
       }
       int m=max(maxi_1,cnt);
       return m;
    }
};
