class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l = matrix.size() -1;
        int st = 0, ed = l;

        while(st < ed){
            int tp_1 = 0;
            int tp_2 = 0;
            for(int i = st; i< ed; i++){
                tp_1 = matrix[st][i];
                tp_2 = matrix[i][ed];

                matrix[i][ed] = tp_1;
                tp_1 = matrix[ed][l-i];

                matrix[ed][l-i] = tp_2;
                tp_2 = matrix[l-i][st];

                matrix[l-i][st]=tp_1;

                matrix[st][i] = tp_2;
            }
            ++st;
            --ed;
        }
        return;
    }
};
