class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> res;
        for(int i=0; i<n;) {
            string x = to_string(nums[i]);
            int j = i+1;
            while(j < n && nums[j] == nums[j-1]+1) j++;
            if(j-1 != i) {
                x = x + ("->" + to_string(nums[j-1]));
            }
            i = j;
            res.push_back(x);
        }
        return res;
    }
};
