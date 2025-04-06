class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& preferences, vector<vector<int>>& pairs) {
        int un_hpy = 0;
        int v[n];
        for(int i = 0 ; i < n/2; i++){
            v[pairs[i][0]] = pairs[i][1];
            v[pairs[i][1]] = pairs[i][0];
        }
        for(int i = 0 ; i<n; i++){
            int j=0;
            int pf = preferences[i][j];
            while(pf!=v[i]){
                int z = 0;
                bool f = false;
                while(preferences[pf][z] != v[pf]){
                    if(preferences[pf][z] == i){
                        un_hpy++;
                        f=true;
                        break;
                    }
                    z++;
                }
                if(f)
                    break;
                pf = preferences[i][++j];
            }
        }
        return un_hpy;
    }
};
