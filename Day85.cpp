class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        vector<int>idx, ans;
        int n = boxes.size();
        for(int i=0;i<n;i++)
            if(boxes[i] == '1') idx.push_back(i);
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(auto ii:idx)
                sum += abs(ii - i);
            ans.push_back(sum);
        }
        return ans;
    }
};
