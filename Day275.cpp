class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> arr(n,0);
        for(int i = 0;i<queries.size();i++){
            int start = queries[i][0];
            int end = queries[i][1] + 1;

            arr[start]++;
            if(end < n){
                arr[end]--;
            }
        }
        for(int i = 1;i<n;i++){
            arr[i] = arr[i] + arr[i-1];
        }

        for(int i = 0;i<n;i++){
            if(nums[i] - arr[i] > 0){
                return false;
            }
        }
        return true;
    }
};
