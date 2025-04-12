class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int mx_len = 0;
      int i = 0, j = 0;
      int zrs = 0;
      while(j < nums.size()){
        while(zrs>k) if(nums[i++] == 0) zrs--;
        if(nums[j] == 0) zrs++;
        if(zrs <= k) mx_len = max(mx_len, j-i+1);
        j++;
      }
      return mx_len;  
    }
};
