class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size();
        int t =  0, c = 0;

        for(int i=1; i<=n+1; i++){
            t = t^i;
        }

        for(int i=1; i<n; i=i+2){
            c = c ^encoded[i];
        }

        int f = t^c;
        vector<int>as(n+1);
        as[0] = f;

        for(int i=1; i<=n; i++)
            as[i] =as[i-1]^encoded[i-1];
            return as;
    }
};
