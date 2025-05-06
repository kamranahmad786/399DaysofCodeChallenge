class Solution {
public:
    int concatenatedBinary(int n) {
        long as = 0, md = 1e9+7;

        for(int i = 1; i<=n; i++){
            int a = i;
            int b = 0;
            while(a > 0){
                b++;
                a/= 2;
            }
            as = ((as<<b) + i) % md;
        }
        return as;
    }
};
