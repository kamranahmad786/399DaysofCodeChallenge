class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long n = nums.size(), as = 0, mx = 0;
        for(long long a: nums) mx = max(mx,a);

        vector<int>b;
        for(int i=0; i<n; i++){
            if(nums[i] == mx){
               b.push_back(i); 
            }
        }
        long long i = 0, j=k-1;

        while(j < b.size()){
            long long lft = b[i] + 1, rht = 0;

            if(j<b.size()-1) rht = b[j+1]-b[j];
            else rht = n-b[j];

            as = as+lft*rht;
            i++;
            j++;
        }
        return as;
    }
};
