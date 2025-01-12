class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int as = 0, n = nums.size(), tp = 0, pv = 0;

        for(int i=n-1; i>= 0; i--){
            if(nums[i]>=left && nums[i] <= right){
                tp++;
                as += tp;
                pv = tp;
            } else if(nums[i] < left){
                as += pv;
                tp++;
            } else {
                pv = 0;
                tp = 0;
            }
            cout << as << " ";
        }
        return as;
    }
};
