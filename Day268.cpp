class Solution {
public:
    int minNumberOfFrogs(string cr) {
        int c = 0, r = 0, o = 0, a = 0, k = 0;
        int res = INT_MIN, ans = 0;

        for(int i = 0; i < cr.length(); i++)
        {
            if(cr[i] == 'c')
            {
                c++;;
                ans++;
            }
            else if(cr[i] == 'r')
                r++;
            else if(cr[i] == 'o')
                o++;
            else if(cr[i] == 'a')
                a++;
            else if(cr[i] == 'k')
            {
                k++;
                ans--;
            }
            res = max(ans, res);
            if(c < r || r < o || o < a || a < k)
                return -1;
        }
        return ans == 0 ? res : -1;
    }
};
