class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int>pre_Xor(n);

        pre_Xor[0] = arr[0];
        for(int i = 1; i<n; i++){
            pre_Xor[i] = pre_Xor[i - 1] ^ arr[i];
        }

        vector<int>as;

        for(int i = 0; i<queries.size(); i++){
            int l = queries[i][0];
            int r = queries[i][1];

            if(l == 0) as.push_back(pre_Xor[r]);

            else as.push_back(pre_Xor[r] ^ pre_Xor[l - 1]);
        }

        return as;
    }
};
