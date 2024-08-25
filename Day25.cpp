class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int previous = -k-1;
        for(int i=0; i<nums.size();i++){
            if(nums[i] == 1){
                if(i-previous-1 < k)
                return false;
                previous = i;
            }
        }
        return true;
    }
};
