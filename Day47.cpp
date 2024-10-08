class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& l) {
        int id = -1, t = 0;
        for(int i = 0, s = 0; i < l.size(); i++) {
            int v = l[i][1]-s;
            if(v > t || v == t && id > l[i][0]) {
                t = v;
                id = l[i][0];
            }
            s = l[i][1];
        }
        return id;
    }
};
