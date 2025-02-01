class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int>r;
        vector<pair<int,int>>s;

        for(int i=0; i<restaurants.size(); i++){
            if(restaurants[i][3] <=maxPrice && restaurants[i][4]<=maxDistance){
                if(veganFriendly==0 ) s.push_back({restaurants[i][1], restaurants[i][0]});
                else if(restaurants[i][2] == 1 && veganFriendly == 1) s.push_back({restaurants[i][1], restaurants[i][0]});
            }
        }
        sort(s.begin(), s.end());
        for(int i=s.size() - 1; i>= 0; --i) r.push_back(s[i].second);
        return r;
    }
};
