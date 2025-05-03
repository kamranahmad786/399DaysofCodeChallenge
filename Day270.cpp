class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long int ans = 0;
        for(int i = 0;i <= total/cost1;i++){
            int s = cost1*i;
            ans += (total - s)/cost2 + 1;
        }
        return ans;
    }
};
