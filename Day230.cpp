class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>as;

        for(int i=1; i<n; i++){
            for(int j = i+1; j<= n; j++){
                if(__gcd(i, j) <= 1){
                    as.push_back(to_string(i) + "/" + to_string(j));
                }
            }
        }
        return as;
    }
};
