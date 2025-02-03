class Solution {
public:
    vector<int> beautifulArray(int n) {
        if (n==1) return {1};
        vector<int> o, e, res;

        for (int x : beautifulArray((n + 1) / 2)) {
            o.push_back(2 * x - 1);
        }

        for (int x : beautifulArray(n / 2)) {
            e.push_back(2 * x);
        }
        
        res.insert(res.end(), o.begin(), o.end());
        res.insert(res.end(), e.begin(), e.end());

        return res;

    }
};
