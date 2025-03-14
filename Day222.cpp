class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
       long long l = 1;
       long long r = *max_element(candies.begin(), candies.end());
       int as = 0;
       long long m, cc;
       while(l <= r){
        m = l + (r - l)/2;
        cc = 0;
        for(int p: candies){
            cc += p/m;
        }
        if(cc >= k){
            as = m;
            l = m + 1;
        }
        else {
            r = m -1;
        }
       }
       return as;
    }
};
