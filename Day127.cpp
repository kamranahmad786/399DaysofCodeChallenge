class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        map<int, int>m;
        for(int i=0; i<n; i++){
            m[intervals[i][0]] = i;
        }
        vector<int>rt;
        for(int i=0; i<n; i++){
            auto itr = m.lower_bound(intervals[i][1]);
            if(itr == m.end()){
                rt.push_back(-1);
            }
            else{
                rt.push_back(itr->second);
            }
        }
        return rt;
    }
};
