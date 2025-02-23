class Solution {
public:
    int minFlips(int a, int b, int c) {
        int cnt = 0;
        int n = a | b | c;
        
        for(int i=0 , x,y,z; n != 0; i++, n>>=1){
            x = a & (1 << i);
            y = b & (1 << i);
            z = c & (1 << i);

            cnt += (x | y) != z;
            cnt += (x & y) != z && z == 0;
        }
        return cnt;
    }
};
