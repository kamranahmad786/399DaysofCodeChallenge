class Solution {
public:
    int maxBottlesDrunk(int nm_btl, int nm_ex) {
        int as = 0;
        int e_btl = 0;
        do {
            as += nm_btl;
            e_btl += nm_btl;
            int nw_btl = 0;
            while(e_btl >= nm_ex){
                nw_btl += 1;
                e_btl -= nm_ex;
                ++nm_ex;
            }
            nm_btl = nw_btl;
        } while (nm_btl);
        return as;
    }
};
