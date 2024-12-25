class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int m, int k, int days){
        int bouquets = 0, flowers = 0 ;
        for (int i=0; i<bloomDay.size(); i++){
            if (bloomDay[i] <= days){
                flowers++ ;
                if (flowers == k){
                    bouquets++ ;
                    if (bouquets == m) return true ;
                    flowers = 0 ;
                }
            }
            else flowers = 0 ;
        }
        return false ;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int s = 0, maxDay = 0 ;
        for (int i : bloomDay){
            maxDay = max(maxDay, i) ;
        }
        int e = maxDay, ans=-1 ;
        int mid ;
        while (s <= e){
            mid = s + (e-s)/2 ;
            if (isPossible(bloomDay, m, k, mid)){
                ans = mid ;
                e = mid - 1 ;
            }
            else s = mid + 1 ;
        }
        return ans ;
    }
};
