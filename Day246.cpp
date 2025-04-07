class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();

        int tar_ttl = (m + n) * mean;

        int rem_ttl = tar_ttl - accumulate(rolls.begin(), rolls.end(), 0);

        if(rem_ttl < n || rem_ttl > 6 * n){
            return {};
        }

        int b = rem_ttl / n;

        int ex = rem_ttl % n;

        vector<int> as(n, b);

        for(int i=0; i<ex; i++){
            as[i]++;
        }
        return as;
       
    }
};
