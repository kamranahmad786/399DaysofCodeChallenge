class Solution {
public:
    long long coloredCells(int n) {
        if (n == 1) return 1;
        long long as = (long long) n*n + (long long)(n-1) * (n-1);

        return as;
    }
};
