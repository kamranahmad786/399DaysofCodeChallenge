class Solution {
public:
    int superPow(int a, vector<int>& b) {
        const int mod = 1337;
        a %= mod;
        
        int res = 1;
        for (int i = 0; i < b.size(); ++i) {
            for (int j = b[i], f = a; j; f = (f * f) % mod, j /= 2) {
                if (j % 2) res = (res * f) % mod;
            }
            if (i < b.size() - 1){
                for (int j = 9, f = res; j; f = (f * f) % mod, j /= 2) {
                    if (j % 2) res = (res * f) % mod;
                }
            }   
        }        
        
        return res % mod;
    }
};
