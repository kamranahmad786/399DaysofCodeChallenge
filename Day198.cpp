class Solution {
public: 
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>v;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            int num = nums[i];
            if(num==0) {v.push_back({mapping[num],i}) ;
            continue;
            }
            int n_num = 0 ;
            int p = 1 ;
            while(num>0){
                int digit = num%10 ;
                int maps = mapping[digit];
                n_num += maps * p ;
                p *=10 ;
                num/=10;
            }
            v.push_back({n_num,i});
        }
        sort(v.begin(),v.end());
        vector<int>result ;
        for(auto it : v){
            result.push_back(nums[it.second]);
        }

        return result;
    }
};
