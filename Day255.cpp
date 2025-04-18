class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int n =  cardPoints.size();
       int sm = 0;
       int lft = k-1, rht = n-1;
       for(int i = 0; i < k; i++){
            sm += cardPoints[i];
        }
        int mx = sm;
        while(k--){
            sm -= cardPoints[lft];
            sm += cardPoints[rht];
            mx = max(mx, sm);
            --lft;
            --rht;
        }
        return mx;
       }
};
