/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> as;
        for(int a=1;  a<=1000; a++){
            for(int b=1; b<=1000; b++){
                int v = customfunction.f(a,b);
                if(v < z){
                    continue;
                } else if(v == z){
                    as.push_back({a,b});
                } else {
                    break;
                }
            }
        }
        return as;
    }
};
