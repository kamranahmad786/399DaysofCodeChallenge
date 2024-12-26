class Solution {
public:
    int check(vector<int>& nums, int threshold,int mid) {
        int sm = 0;
        for(int n: nums){
            sm += (n + mid - 1) / mid;
        }
        return sm <= threshold ? true : false;
    }

    int smallestDivisor(vector<int>& nums, int threshold){
        int strt = 1;
        int ed = 0;
        for(int n: nums)
          if(n>ed)
             ed = n;
        
        int as= ed;

        while (strt <= ed){
            int mid = strt + (ed - strt) / 2;
            if(check(nums, threshold, mid)){
                as = mid;
                ed = mid -1;
            } else {
                strt = mid + 1;
            }
        }
        return as;
    }
};
