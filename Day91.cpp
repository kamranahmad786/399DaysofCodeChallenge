class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        bool mts = true;
        for (auto &i : num){
            int a = i - '0';

            if (change[a] >= a){
                i = change[a] + '0';
                if (change[a] > a)
                mts = false;
            }
            else {
                if (!mts)
                break;
            }
        }
        return num;
    }
};
