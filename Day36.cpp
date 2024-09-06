class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int sol = -1;
        int solIdx = -1;
        for(int i=0; i<points.size(); i++){
            if(points[i][0] == x || points[i][1] == y){
                if(sol == -1) {
                    sol = abs(points[i][0]-x) + abs(points[i][1]-y);
                    solIdx = i;
                }
                else if(sol > abs(points[i][0]-x) + abs(points[i][1]-y)) {
                    sol = abs(points[i][0]-x) + abs(points[i][1]-y);
                    solIdx = i;
                }
            }
        }
        return solIdx;
    }
};
