class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int rem_5_per = (arr.size()*5)/100;
        int sum = 0, count = 0;
        for(int i=rem_5_per; i<arr.size()-rem_5_per; i++){
            sum += arr.at(i);
            count++;
        }
        return (((double)sum/count));
    }
};
