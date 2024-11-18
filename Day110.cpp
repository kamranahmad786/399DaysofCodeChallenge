class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>idx,res;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(key==nums[i])
              idx.push_back(i);
        }
        for(int i=0; i<n; i++){
            bool flag=false;
            for(auto j: idx){
                if(abs(i-j) <= k){
                    flag = true;
                    break;
                }
            }
            if(flag)
              res.push_back(i);
        }
        return res;
    }
};
