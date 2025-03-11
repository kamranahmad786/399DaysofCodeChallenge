class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>r(n-k+1);
        for(int i=0; i<r.size(); i++){
            r[i] = nums[i];
            for(int j=1; j<k; j++){
                if(nums[i+j] - nums[i+j-1] != 1){
                    r[i] =-1;
                    break;
                }
                r[i] = nums[i+j];
            }
        }
        return r;
    }
};
