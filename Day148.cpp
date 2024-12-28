class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();
        if (n-1 >= hour){
            return -1;
        }
        int i =1;
        int j = 10000000;

        while(i<=j){
            int m = i + (j - i) /2;
            double sm = 0.0;
            for (int a = 0; a < n-1; a++){
                sm += ceil(dist[a] / (double)(m));
            }
            sm += (double)(dist[n-1])/m;

            if (sm <= hour){
                j = m -1;
            } else {
                i = m + 1;
            }
        }
        return j + 1;
    }
};
