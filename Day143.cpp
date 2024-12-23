class Solution {
public:
    int daysRequired(vector<int>& weights, int c) {
       int d = 1, l = 0;
       for(int i = 0; i<weights.size(); i++){
        if(l + weights[i] > c){
            d++;
            l = weights[i];
        } else {
            l += weights[i];
        }
       } 
       return d;
    }

    int shipWithinDays(vector<int>&weights, int days){
      int low = 0, high = 0;
      for(int i =0; i<weights.size(); i++){
        low = max(low, weights[i]);
        high += weights[i];
      }
      while (low <= high){
        int mid = (low + high) /2;
        int n_days = daysRequired(weights , mid);
        if(n_days <= days) high = mid - 1;
        else  low = mid + 1;
      }
      return low;
    }
};
