#define ll long long
class Solution {
public:
    bool helper(ll mini, vector<int>& nums, int& k){
        ll count = 0, i = 0;
        while(i<nums.size()){
            if(nums[i]<=mini) count++, i+=2;
            else i++;
        }
        return count>=k;
    }

    int minCapability(vector<int>& nums, int k) {
        ll low = INT_MIN, high = INT_MAX;

        for(int ele : nums) low=(low>ele ? ele : low), high=(high<ele ? ele : high);

        ll ans = INT_MAX;
        
        while(low<=high){
            ll mid = (low+(high-low)/2);
            if(helper(mid, nums, k)) ans=(ans>mid ? mid : ans), high=mid-1;
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
