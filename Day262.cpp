class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        int mx=0;
        vector<vector<int>> k={{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,1,0},{2,0,1}};
        for(auto &x:k){
            int ans=0,k=1;
            for(auto &y:x){
                int temp=nums[y];
                while(temp){
                    if(temp&1)
                        ans+=k;
                    k*=2;
                    temp>>=1;
                }
            }
            mx=max(ans,mx);
        }
        return mx;

    }
};
