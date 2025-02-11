class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        vector<int>p_ord(n+1, 0);
        vector<int>p_eve(n+1, 0);
        for(int i=1; i<=n; i++){
            p_ord[i] = p_ord[i-1] + ((i%2==0) ? nums[i-1]: 0);
            p_eve[i] = p_eve[i-1] + ((i%2==0) ? 0: nums[i-1]);
        }
        for(int i=0; i<n; i++){
            int eve = p_eve[i] + p_ord[n]-p_ord[i+1];
            int od = p_ord[i] + p_eve[n]-p_eve[i+1];

            if(eve == od) cnt++;
        }
        return cnt;
    }
};
