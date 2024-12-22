class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int a = 1, n = arr.size() -1;
        int mid = a + (n-a) /2;
        while(a <= n){
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
            return mid;

            if(arr[mid] < arr[mid+1])
                a = mid + 1;
            else 
                n = mid - 1;
            mid = a + (n - a) / 2;
        }
        return -1;
    }
};
