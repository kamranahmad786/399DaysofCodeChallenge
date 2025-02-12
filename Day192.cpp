class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long int tl = 0, sm_int = 0, cnt = 0;
        for(int i=0; i<n ; i++){
            tl += nums[i];
        }
        for(int i=0; i<n-1; i++){
            sm_int += nums[i];
            tl -= nums[i];
            if(sm_int >= tl) cnt++;
        }
        return cnt;
    }
};
