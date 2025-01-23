class Solution {
public:
    int countHomogenous(string s) {
        if(s.length() == 1){
            return 1;
        }
        int m=1e9+7;
        long long int as = 0;
        long long int cnt = 0;
        int i=0;
        for(i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                cnt++;
            }
            else{
                cnt++;
                cnt=((cnt+1)*(cnt))/2;
                as+= cnt;
                cnt=0;
            }
        }
        if(i==s.length()-1){
            cnt++;
            cnt=((cnt+1)*(cnt))/2;
            as+=cnt;
        }
        return as%(1000000000+7);
    }
};
