class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int s=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                s= min(s,abs(i-start));
            }
        }
        return s;
    }
};
