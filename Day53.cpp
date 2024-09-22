class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
    int count=1, cSum=0;
    for (int i=0;i<s.size();i++) {
        cSum += widths[s[i]-'a'];
        if(cSum > 100) {
            cSum = widths[s[i]-'a'];
            count++;
        }
    }
    return {count,cSum};
    }
};
