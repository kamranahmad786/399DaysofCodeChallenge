class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int s=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                s+=customers[i];
            }
        }
        int i=0;
        int j=0;
        int as=0;
        int sg=0;
        while(i<n && j<n){
            if((j-i+1)>minutes){
                if(grumpy[i]==1){
                    sg-=customers[i];
                }
                i++;
            }
            if(grumpy[j]==1){
                sg+=customers[j];
            }
            j++;
            as=max(as,sg+s);
        }
        return as;
    }
};
