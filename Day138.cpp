class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long crl_app = 0;

        long long i = 0;

        while(crl_app < neededApples){
            crl_app += 6*2 * i*i;

            i++;
        }

        return 8 * (i-1);
    }
};
