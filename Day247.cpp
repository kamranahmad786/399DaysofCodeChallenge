class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int wnr = arr[0];

        if(k >= arr.size()){
            for(int num: arr){
                wnr = max(wnr, num);
            }
        }
        else {
            int strk = 0;

            for(int i=1; i<arr.size(); ++i){
                if(wnr > arr[i]){
                    ++strk;
                }
                else{
                    wnr = arr[i];
                    strk = 1;
                }
                if (strk == k){
                    break;
                }
            }
        }
        return wnr;
    }
};
