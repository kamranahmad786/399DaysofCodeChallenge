class Solution {
public:
    string fractionAddition(string s) {
        int N = s.size();
        int an = 0;
        int ad = 1;
        bool sign = 0;
        int i =0;

        while(i<N){
            if(s[i] == '-'){
                sign = 1;
                i++;
            }
            else if(s[i] == '+')i++;

            int n=0;
            while (i < s.size() && isdigit(s[i])) {
                n = n * 10 + (s[i] - '0');
                i++;
            }

            if(sign) n = -n;
            sign = 0;

            i++;

            int d=0;
            while (i < s.size() && isdigit(s[i])) {
                d = d * 10 + (s[i] - '0');
                i++;
            }
            
            an = (an*d) + (ad*n);
            ad = ad*d;
            
        }

        int simplfy = gcd(abs(an), ad);
        an /= simplfy;
        ad /= simplfy;

        string ans ;
        ans = to_string(an)+'/'+to_string(ad);
        return ans;

    }
};
