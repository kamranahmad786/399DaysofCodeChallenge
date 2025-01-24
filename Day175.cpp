class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long sm = 1, cr = 0;
        int n = nums.size();
        for(int i=n-2; i>=0; i--){
            if(nums[i] != nums[i+1]) cr = 1 + cr;
            else cr = 0;
            sm += (1+cr);
        }
        return sm;
    }
};
