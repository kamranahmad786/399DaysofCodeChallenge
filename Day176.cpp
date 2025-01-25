#include <vector>
using namespace std;
class Solution {
public:
    vector<int> memLeak(int mem1, int mem2) {
        int t = 1; // ----> Started from the first second
        
        while (true) {
            if (mem1 >= mem2) {
                // -----> Allocated memory to the stick with more available memory
                if (mem1 >= t) {
                    mem1 -= t;
                } else {
                    // -------> Not enough memory, program crashes
                    break;
                }
            } else {
                // ------> Allocated memory to the stick with less memory
                if (mem2 >= t) {
                    mem2 -= t;
                } else {
                    // ----------> Not enough memory, program crashes
                    break;
                }
            }
            t++; // --------->  Moving to the next second
        }
        
        return {t, mem1, mem2};
    }
};
