class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i=2; i<arr.size(); i++){
            if(arr[i]-arr[i-1] != arr[i-1]-arr[i-2]){
                return false;
            }
        }
        return true;
    }
};
