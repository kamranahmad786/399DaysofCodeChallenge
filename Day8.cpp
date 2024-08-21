class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int stotal=0;
        int sum = 0;
        if(start > destination){
            swap(start,destination);
        }
        for(int i=start; i<destination; i++){
            sum+= distance[i];
        }
        for(int i = 0; i<distance.size(); i++){
            stotal+= distance[i];
        }
        int r = stotal - sum;
        return min(r,sum);
    }
};
