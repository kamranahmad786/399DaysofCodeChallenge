class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>cnt(n+1, 0);
        for(int i=0; i<nums.size(); i++){
            int nm = nums[i];
            while(nm){
                if(nm&1) cnt[i]++;
                nm >>=1;
            }
        }
        cnt[n] = -1;
        int l = 0, r = 0;
        while(r <= n){
            if(cnt[r] == cnt[l]){
                r++;
                continue;
            }
            sort(nums.begin() + l, nums.begin() + r);
            l = r;
        }
        for(int i =0; i<n -1; i++){
            if(nums[i] > nums[i+1]) return false;
        }
        return true;
    }
};
