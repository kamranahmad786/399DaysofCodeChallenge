class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int ans = 0;
        int lw = 0, up = 1e9;
        sort(position.begin(), position.end());
        while(lw<=up){
            int mid = (lw + up) /2;
            int ttlfnd = 1;
            int prev = 0;
            
            for(int i=1; i<position.size(); i++){
                int dif = position[i] - position[prev];
                if(dif >= mid){
                    ttlfnd++;
                    prev = i;
                }
            }
            if(ttlfnd >= m){
                lw = mid + 1;
                ans = max(ans, mid);
            } else {
                up = mid -1;
            }
        }
        return ans;
    }
};
