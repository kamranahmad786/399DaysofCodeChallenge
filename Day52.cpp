class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return vector<string> {to_string(nums[0])};
        vector<string> ans;
        int c = 1;
        for(int i = 1; i < n; ++i){
            if(nums[i] != nums[i - 1] + 1){
                if(c == 1) ans.push_back(to_string(nums[i - 1]));
                else ans.push_back(to_string(nums[i - c]) + "->" + to_string(nums[i - 1]));
                c = 0;
            }
            if(i == n - 1){
                if(c == 0) ans.push_back(to_string(nums[i]));
                else ans.push_back(to_string(nums[i - c]) + "->" + to_string(nums[i]));
            }
            ++c;
        }
        return ans;
    }
};
