class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int mx_Idx = 0, cnt = 0;
        for (int i = 0; i < flips.size(); i++) {
            mx_Idx = max(mx_Idx, flips[i]);
            if (mx_Idx == i + 1) {
                cnt++;
            }
        }
        return cnt;
    }
};
