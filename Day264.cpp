class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>pref(32,0);

        int o = 0;
        int as = INT_MAX;
        int st=0, en=0;

        while(st<=en && en<n){
            o |= nums[en];

            if(o<k){
                for(int i=0; i<32; i++){
                    if(nums[en] & (1<<i)) pref[i]++;
                }
                en++;
                continue;
            }
            int l = en-st+1;
            as= min(as, l);

            for(int i=0; i<32; i++){
                if(nums[st] &(1<<i)){
                    pref[i]--;
                    if(pref[i]==0){
                        o ^=(1<<i);
                    }
                }
            }
            st++;
        }
        if(as==INT_MAX) return -1;
        return as;
    }
};
