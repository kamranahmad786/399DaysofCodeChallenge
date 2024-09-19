class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int i=0;
        long long  n=nums.size(),ans=0;
        while(i<n){
            int j=0;
            while(j<n){
                int k=0;
                long long maxi=0;
                while(k<n){
                    if((i<j) && (j<k) && (i!=j && i!=k && j!=k)){
                        long long  a=nums[i] ,b=nums[j] ,c=nums[k] ;
                        maxi=((a - b) * c);
                        ans=max(ans,maxi);
                    }
                    k++;
                }    
            j++;
            }
        i++;
        }
    return ans;
    }
};
