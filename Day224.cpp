class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int>val;
        for(int i=0; i<n ; i++){
            val.push_back(i);
        }
        vector<int> a = val;
        vector<int>b = val;
        int as = 0;
        do{
            as++;
            for(int i=0; i<n; i++){
                if(i%2 ==0){
                    b[i] = a[i/2];
                }
                else{
                    b[i] = a[n/2+ (i-1)/2]; 
                }
            }
            a = b;
        } while (a != val);
        return as;
    }
};
