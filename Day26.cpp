class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = -1;
        for (auto num : candies)
             maxi = max(num, maxi);
        vector<bool> res;
        for(auto num : candies)
           res.push_back(num+extraCandies >= maxi);
        
        return res;
    }
};
