class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> sol ;
        int c = 0;
        for (int i=0; i<rectangles.size(); i++){
            int x= rectangles[i][0];
            int y= rectangles[i][1];
            int z= min(x,y);
            sol.push_back(z);
        }
        sort(sol.begin(), sol.end());
        for(int j = 0; j<sol.size(); j++){
            if(sol[j] == sol[sol.size()-1]){
                c++;
            }
        }
        return c;
    }
};
