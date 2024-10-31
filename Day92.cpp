class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int Min= INT_MAX;
        for(int i=1; i<n; i++){
            int diff = abs(arr[i] - arr[i-1]);
            Min = min(diff, Min);
        }
        vector<vector<int>>ans;
        for(int i=0; i<n-1; i++){
            if(arr[i+1] - arr[i] == Min){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
