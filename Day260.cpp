class Solution {
public:
    int mirrorReflection(int p, int q) {
        int l_c_m = (p*q) / (__gcd(p,q));
        if((l_c_m/p)%2 == 1){
            if((l_c_m/q)%2==1) return 1;
            return 2;
        }
        return 0;
    }
};
