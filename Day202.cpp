class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size(),x_val = pref[0];

        for(int i = 1;i<pref.size();i++)
        {
           int tp = x_val^pref[i];
           pref[i] = tp;
           x_val = x_val^pref[i];
        }
        return pref;
    }
};
