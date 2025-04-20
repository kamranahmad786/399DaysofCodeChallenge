class Solution {
public:
    int longestBeautifulSubstring(string word) {
       int mx_i =0, i=0, j=0,n = word.size(), cnt = 0;
       if(n < 5)
           return 0;
        while(j<n){
            if(j != n-1 && word[j] < word[j+1])
               cnt++;
            else if(j ==n-1 || (j != n-1 && word[j] > word[j+1])){
                cnt++;
                if(cnt == 5)
                     mx_i = max(mx_i, j-i+1);
                cnt = 0;
                i = j+1;
            }
            j++; 
        }
        return mx_i;
    }
};
