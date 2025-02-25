class Solution {
public:
    int xorBeauty(vector<int>& nums) {
       int as = 0;
       for(int i=0; i<nums.size(); i++){
        as^= nums[i];
       } 
       return as;
    }
};
