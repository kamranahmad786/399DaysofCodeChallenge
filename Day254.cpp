class Solution {
public:

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
       if(k< 1)return 0;
        
        int i=0,j=0;
        int temp= 1,ans=0;
        
        while(j< nums.size()){
            temp*= nums[j];
            
            while(i<= j && (temp>=k)){
                temp/= nums[i];
                i++;
            }
            
            ans+= (j-i+1);
            j++;
        }
        
        return ans;
    }
};
