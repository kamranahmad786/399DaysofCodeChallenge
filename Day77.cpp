class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> s=strs;
        for(int i=0;i<s.size();i++)
        {
            sort(s[i].begin(),s[i].end());
        }
        unordered_map<string,int>mp;
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=k;
                ans.push_back(vector<string>()); 
                
                ans[k].push_back(strs[i]);
                k++;

            }
            else
            {
               ans[mp[s[i]]].push_back(strs[i]);
            }
        }
        return ans;
        
    }
};
