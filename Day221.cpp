class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<= n-2; i++){
            string as = "";
            int nm = n;
            while(nm  > 0){
                as.push_back('0' + (nm % i));
                nm = nm / i;
            }
            string r = as;
            reverse(r.begin(), r.end());
            if(as != r){
                return false;
            }
        }
        return true;
    }
};
