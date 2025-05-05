class Solution {
public:
    long long maxScore(vector<int>& nums) {
        long long as = LLONG_MIN , l = nums[0], g = nums[0];
        
        for(int i=1; i < nums.size(); i++){
            l = gcd(l, nums[i]);
            g = lcm(g, nums[i]);
        }
        as = max(l*g, as);
        long long s = nums[0];

        for(int i=0 ; i<nums.size(); i++){
            long long x = -1;
            long long y = 1;
            for(int j = 0; j < nums.size(); j++){
                if(j == i) continue;
                else if (x == -1) x = nums[j];
                else x = gcd(x, nums[j]);
                y = lcm(y,nums[j]);
            }
            as = max(as,x*y);
        }
        return as;
    }
};
