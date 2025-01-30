class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>s(n,0);
        for(int i=0; i<bookings.size(); i++){
            s[bookings[i][0]-1]=s[bookings[i][0]-1]+bookings[i][2];
            if(bookings[i][1]<n){
                s[bookings[i][1]]=s[bookings[i][1]]-bookings[i][2];
            }
        }
        for(int i=1; i<n; i++){
            s[i]=s[i]+s[i-1];
        }
        return s;
    }
};
