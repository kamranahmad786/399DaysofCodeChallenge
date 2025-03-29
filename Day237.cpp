class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(nums[i]%k == 0){
                int c_gcd = 0;
                for(int j=i; j<n; j++){
                    c_gcd = __gcd(c_gcd, nums[j]);
                    if(c_gcd==k) cnt++;
                }
            }
        }
        return cnt;
    }
};
