class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size();

        for(int i=0; i<k-1;i++){
            colors.push_back(colors[i]);
        }
        n+=k-1;
        int i=0, j=1, l=0, cnt=0;
        while(j<n){
            if(colors[j] == colors[j-1]){
                i=j;
            }
            if(j-i+1==k){
                cnt++;
                i++;
            }
            j++;
        }
        return cnt;
    }

};
