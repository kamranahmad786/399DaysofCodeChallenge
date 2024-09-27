class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (int i = 0; i < details.size(); i++) {
            string detail = details[i];
            int age = (detail[11] - '0') * 10 + (detail[12] - '0');
            if (age > 60) count++;
        }
        return count;
    }
};

