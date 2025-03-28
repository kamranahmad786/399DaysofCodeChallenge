class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> r;
        long long a = num - 3;
        if(a%3==0){
            r.push_back(a/3);
            r.push_back(r[0]+1);
            r.push_back(r[1]+1);
        }
        return r;
    }
};
