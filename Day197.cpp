class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pst=0;
        int ngt = 1;
        vector<int>as(nums.size());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>= 0){
                as[pst] = nums[i];
                pst=pst+2;
            }
            else{
                as[ngt] = nums[i];
                ngt = ngt +2;
            }
        }
        return as;
    }
};
