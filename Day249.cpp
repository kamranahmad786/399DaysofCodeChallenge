class Solution {
public:
    int getSum(int a, int b) {
        int as = 2 * (a & b) + (a ^ b);
        return as;
    }
};
