class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int score=0, user = divisors[0];
        for(int i=0; i < divisors.size(); i++){
            int div=0;
            for(int j=0; j < nums.size(); j++){
                if(nums[j] % divisors[i]==0) div++;
            }
            if(div >= score){
                if(div==score){
                    if(user > divisors[i]) user = divisors[i];
                }
                else user = divisors[i];
                score = div;
            }
        }
        return user;
    }
};
