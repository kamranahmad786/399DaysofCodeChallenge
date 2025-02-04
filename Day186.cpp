class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int c = 0;
        for(int i=0; i<d.size(); i++){
            c += d[i];
        }
        return c%2 == 0;
    }
};
