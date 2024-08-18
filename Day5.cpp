class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int c = 0, d = 0;
        for(int i =0; i<n; i++){
            if (nums[i] == 1){
                c++;
            }
            if(d < c){
                d=c;
            }
            if(nums[i]==0){
                c=0;
            }
        }
        return d;
    }
};
