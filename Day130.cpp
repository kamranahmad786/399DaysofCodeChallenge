class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size();
        int q = queries.size();
        sort(items.begin(), items.end());
        for(int i=1; i<n; i++){
            items[i][1] = max(items[i][1], items[i-1][1]);
        }
        for(int i=n-1; i>0; i--){
            if(items[i][0] == items[i-1][0])
              items[i-1][1] = items[i][1];
        }
        vector<int>ans(q,0);
        for(int i=0; i<q; i++){
            int a = 0, b = n-1;
            int res = 0;
            while(a <= b){
                int mid = (a + b)/2;
                if(items[mid][0] <= queries[i]){
                    res = items[mid][1];
                    a = mid + 1;
                }
                else b = mid - 1;
            }
            ans[i] = res;
        }
        return ans;
    }
};
