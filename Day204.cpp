class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long x_or = 0;
        
        for(int i=0; i<nums.size(); i++){
            x_or = x_or ^ nums[i];
        }

        int r_m = (x_or & (x_or - 1)) ^ x_or;
        int a_1 = 0, b_2 = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] & r_m){
                a_1 = a_1 ^ nums[i];
            }
            else {
                b_2 = b_2 ^ nums[i];
            }
        }
        return {a_1 , b_2};
    }
};
