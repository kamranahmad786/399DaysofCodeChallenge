class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool>res;
        vector<int> s;
        int d = (nums[0] % 2) ? 1: 0;
        for(int i=1; i<nums.size(); ++i){
            if(nums[i] % 2){
                if(d == 0){
                    d = 1;
                } else {
                    s.push_back(i);
                }
            } else {
                if(d == 1){
                    d = 0;
                } else {
                    s.push_back(i);
                }
            }
        }

        for(auto& w:queries ){
            int bt = w[0], nd = w[1];
            int gt = upper_bound(s.begin(), s.end(), bt) - s.begin();

            if(gt >= s.size() || s[gt] > nd){
                res.push_back(true);
            }else {
                res.push_back(false);
            }
        }
        return res;
    }
};
