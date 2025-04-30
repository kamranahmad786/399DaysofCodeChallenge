class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int cr = 0;
        int mn = 0;
        int mx = 0;
        for(auto d:differences){
            cr += d;
            mn = min(mn,cr);
            mx = max(mx,cr);
            if((upper-mx) - (lower-mn) +1 <=0) return 0;
        }
        return (upper-mx) - (lower-mn) +1;
    }
};
