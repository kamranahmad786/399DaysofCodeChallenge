class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cstmr) {
        double as = cstmr[0][1];
        int f_time = cstmr[0][0] + cstmr[0][1];

        for(int i=1; i<cstmr.size(); i++){
            int strt_time = max(cstmr[i][0],f_time);
            f_time = strt_time + cstmr[i][1];
            as += f_time - cstmr[i][0];
        }
        return as / cstmr.size();
    }
};
