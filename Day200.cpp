class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int m_Bit) {
        int ms = (1<<m_Bit)-1;
        vector<int> as(nums.size());
        int i=0, j=nums.size()-1;
        int v = 0;
        while(j>=0){
            v = v^nums[i];
            as[j] = v^ms;
            i++;
            j--;
        }
        return as;
    }
};
