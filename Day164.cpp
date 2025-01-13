class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int gst_D = INT_MAX;
        for(int i=0; i<ghosts.size(); i++){
            int xy = abs(target[0] - ghosts[i][0]) + abs(target[1] - ghosts[i][1]);
            gst_D = min(gst_D,xy);
        }
        int mn_dst = abs(target[0]) + abs(target[1]);
        if(gst_D <= mn_dst) return false;
        else return true;

    }
};
