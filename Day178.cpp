class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int as = 0;
        sort(nums.begin(), nums.end());
        for(int i=nums.size()-2; i>=0; --i){
            if (nums[i] != nums[i+1]){
            as+= nums.size() - (i+1);
        }
    }
    return as;
    }
};
