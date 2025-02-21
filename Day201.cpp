class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long  ans =k;
        
        for(auto val :nums)
            ans = ans^val;
        
        long long count =0;
        
        for(int i=0;i<64;i++)
            if(((ans>>i)&1) ==1)
                count++;
        return count;
        
    }
};
