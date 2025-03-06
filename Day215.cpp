class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int i=0;
        int j=0;
        int c_as=0;
        int as=0;
        while(j<n){
            c_as+=arr[j];

            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                double avg=c_as/k;
                if(avg>=threshold){
                    as++;
                }
                c_as-=arr[i];
                i++;
                j++;
            }
        }
        return as;
    }
};
