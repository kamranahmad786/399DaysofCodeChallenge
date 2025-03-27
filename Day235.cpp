class Solution {
public:
    bool is_prime(int x){
        for(int i=2; i*i <= x; i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int a = -1, b = -1;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] == 1){
                continue;
            }
            if(is_prime(nums[i])){
                if(a==-1){
                    a = i;
                }
                b = i;
            }
        }
        return (b-a);
    }
};
