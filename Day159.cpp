class Solution {
public:
    bool isPossible(long long mid, vector<int>& ranks, int cars){
        long long curr=0;
        for (auto val: ranks){
            curr+= (long long)sqrt(mid/val);
            if (curr>=cars)return true;
        }
        return (curr>=cars);
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long low=0, high= LLONG_MAX;
        long long ans= -1;
        while (low<=high){
            long long mid= low+ (high-low)/2;
            if (isPossible(mid,ranks,cars)){
                ans= mid;
                high= mid-1;
            }else{
                low= mid+1;
            }
        }
        return ans;
    }
};
