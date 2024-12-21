class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int a = nums.size();

        if(a == 1){
            return nums[0];
        }

        if(nums[0] != nums[1]){
            return nums[0];
        }

        if(nums[a-1] != nums[a-2]){
            return nums[a-1];
        }

        int b = 0;
        int mid = b + (a - b) / 2;
        int ans = -1;

        while(b <= a){
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                ans = nums[mid];
                break;
            }
            else if((nums[mid] == nums[mid + 1] && mid % 2 == 0) || (mid % 2 == 1 && nums[mid] == nums[mid-1])){
                b = mid + 1;
            }
            else {
                a = mid - 1;
            }
            mid = b + (a - b) / 2;
        }
        return ans;
    }
};
