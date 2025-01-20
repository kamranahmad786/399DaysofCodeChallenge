class Solution {
public:
    string baseNeg2(int n) {
        if (n == 0) return "0";

        char res[32]; 
        int idx = 0;

        while (n != 0) {
            int rem = n % -2;
            n /= -2;

            if (rem < 0) {
                rem += 2;
                n += 1;
            }

            res[idx++] = '0' + rem;
        }

        for (int i = 0; i < idx / 2; ++i) {
            char temp = res[i];
            res[i] = res[idx - i - 1];
            res[idx - i - 1] = temp;
        }

        res[idx] = '\0'; \
        return std::string(res);
    }
};
