class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int r = 0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            r = r|nums[i];
        }
        return r;
    }
};
