class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int no_1 = nums1.size();
        int no_2 = nums2.size();
        int mx = 0;
        int i = 0;
        int j = 0;
        while (i < no_1 && j < no_2){
            if(nums1[i] > nums2[j]){
                i++;
            }
            else {
                j++;
            }
            mx = max(mx, j-i-1);
        }
        return mx;
    }
};
