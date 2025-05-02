class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
    vector<int>as;
    for(int i=1; i<9; i++){
        int cr = i;
        int tp = i + 1;

        while(cr <= high){
            if(tp > 9)
                break;
            
            cr *= 10;
            cr += tp;
            tp++;

            if(cr >= low && cr <= high){
                as.push_back(cr);
            }
        }
    }
    sort(as.begin(), as.end());
    return as;
    }
};
