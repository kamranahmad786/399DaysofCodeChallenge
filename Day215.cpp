class Solution {
public:
    bool isPrime(int a){
        if(a == 1 || a == 0) return false;
        if(a == 2) return true;
        for(int i=2;i<=sqrt(a);i++){
            if(a%i == 0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        if(left-right==0) return {-1,-1};
        vector<int>v;
        int mina = INT_MAX;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                if(v.empty())
                    v.push_back(i);
                else{
                    mina = min(mina,i - v.back());
                    v.push_back(i);
                }
            }
        }
        if(v.size()<2) return {-1,-1};
        for(int i=0;i<v.size()-1;i++){
            if(v[i+1] - v[i] == mina){
                return {v[i],v[i+1]};
            }
        }
        return {-1,-1};
    }
};
