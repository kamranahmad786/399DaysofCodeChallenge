class Solution {
public:
    bool isPossible(vector<int>& nums, int mid, int maxOperations) {
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % mid == 0){
                cnt += (nums[i]/mid)-1;
            }
            else{
                cnt += (nums[i]/mid);
            }
            if(cnt > maxOperations){
                return false;
            }
        }
        if(cnt > maxOperations){
            return false;
        }
        return true;
    }

    int minimumSize(vector<int>& nums, int maxOperations){
        int start = 1, end = INT_MAX;
        int ans = 0;
        while(start <= end){
          int mid = start + (end - start)/2;
          if(isPossible(nums, mid, maxOperations)){
            ans = mid;
            end = mid -1;
          }  
          else {
            start = mid + 1;
          }
        }
        return ans;

    }
};
