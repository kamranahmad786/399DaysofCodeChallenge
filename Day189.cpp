class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        if(arr.size()<=k){
            return arr;
        } else {
            sort(arr.begin(), arr.end());
            vector<int>as;
            int st = 0, ed = arr.size()-1;
            int md = arr[(arr.size()-1)/2];
            while(k!=0 & st<ed){
                if(abs(arr[st]-md)==abs(arr[ed]-md)){
                    if(arr[st]>arr[st]){
                        as.push_back(arr[st++]);
                    } else{
                        as.push_back(arr[ed--]);
                    }
                } else if(abs(arr[st]-md) > abs(arr[ed]-md)){
                    as.push_back(arr[st++]);
                }else{
                    as.push_back(arr[ed--]);
                }
                k--;
            }
            return as;
        }
    }
};
