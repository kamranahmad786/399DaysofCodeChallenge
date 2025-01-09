class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> res;
        int lt = 1, rt = n;

        while (k > 1) {
            if (k % 2 == 1) {  
                res.push_back(lt++);
            } else {  
                res.push_back(rt--);
            }
            k--;
        }
        for (int i = lt; i <= rt; i++) {
            res.push_back(i);
        }
        
        return res;
    }
};
