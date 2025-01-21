class Solution {
public:
    vector<int> closestDivisors(int num) {
       auto findClosestDivisors = [](int n) -> vector<int> {
            for (int i = sqrt(n); i > 0; --i) {
                if (n % i == 0) {
                    return {i, n / i};
                }
            }
            return {}; 
        };
    vector<int> div1 = findClosestDivisors(num + 1);
    vector<int> div2 = findClosestDivisors(num + 2);

    if (abs(div1[0] - div1[1]) <= abs(div2[0] - div2[1])) {
            return div1;
        } else {
            return div2;
        }
    }
};
