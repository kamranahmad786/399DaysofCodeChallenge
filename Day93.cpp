class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int end=nums.size();
        int Midx;
        int cnt =0;
        for(int i=0; i<end; i++){
            if(nums[i]>=(2*cnt)){
                cnt = nums[i];
                Midx=i;
            }
        }
        for(int i=0; i<end; i++){
            if(cnt < 2*(nums[i]) && i!=Midx){
                return -1;
                break;
            }
        }
        return Midx;
    }
};
