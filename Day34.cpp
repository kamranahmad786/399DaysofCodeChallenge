class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double max_diagonal = 0;
        int max_area = 0;

        for (auto& dim : dimensions) {
            int length = dim[0];
            int width = dim[1];

            double diagonal = sqrt(length * length + width * width);

            int area = length * width;

          
            if (diagonal > max_diagonal || (diagonal == max_diagonal && area > max_area)) {
                max_diagonal = diagonal;
                max_area = area;
            }
        }

        return max_area;
    }
};
