class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
       int as = 0, n = nums.size();
       if(n<=1) return 0;
       for(int i=0; i<32; i++){
        int o = 0, z = 0;
        for(int j=0; j<n; j++){
            if(nums[j]==0){
                z++;
                continue;
            }
            int t=nums[j]%2;
            (t==1) ? o++: z++;
            nums[j] /=2;
        }
        as += o*z;
       } 
       return as;
    }
};
