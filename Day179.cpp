class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>as(nums.size());
        long long scr = 0;
        int idx = 0;
        int mx = 0;
        while(idx<nums.size()){
            mx = max(mx,nums[idx]);
            scr += nums[idx]+mx;
            as[idx]=(scr);
            idx++;
        }
        return as;
    }
};
