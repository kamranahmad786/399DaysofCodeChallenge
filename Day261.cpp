class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        for(int i=0;i<nums1.size() && nums2.size()%2!=0;i++){
            ans^=nums1[i];
        }
        for(int i=0;i<nums2.size() && nums1.size()%2!=0;i++){
            ans^=nums2[i];
        }
        return ans;
    }
};
