class Solution {
public:
    int mxel(vector<int>& piles){
        int mx = INT_MIN;
        for(int i = 0; i<piles.size(); i++){
            mx = max(mx,piles[i]);
        }
        return mx;
    }

    long long thours(vector<int>& piles, int hrs){
        long long t= 0;
        for(int i =0; i<piles.size(); i++){
            t += (piles[i] + hrs - 1) / hrs;
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, hg = mxel(piles);
        while(l <= hg){
            int md = l + (hg -l) /2;
            long long t = thours(piles,md);
            if(t<=h) hg = md -1;
            else l = md +1;
        }
        return l;
    }
};
