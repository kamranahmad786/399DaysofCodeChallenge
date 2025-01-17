class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long as = 0;
        int n = nums.size();
        long long cnt = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == 0)
              cnt++;
        else{
            as += cnt * (cnt+1)/2;
            cnt = 0;
        }
        }
        as += cnt *(cnt +1)/2;

        return as;
    }
};
