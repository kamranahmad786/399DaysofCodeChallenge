class Solution {
public:
    bool check(vector<vector<int>>& v) {
        sort(v.begin(), v.end()); 
        int ct = 0;
        int maxi = v[0][1]; 
        for(auto& it : v){
            int s = it[0], e = it[1];
            if(maxi <= s) ct++; 
            maxi = max(maxi, e);
        } 
        return ct >= 2;
    }
    
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>> x, y; 
        for(auto& it : rectangles){
            x.push_back({it[0], it[2]});
            y.push_back({it[1], it[3]});
        } 
        return check(x) || check(y);
    }
};
