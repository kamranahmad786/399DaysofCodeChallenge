class Solution {
public:
int bs(vector<int>& arr,int number){
    int l=0;
    int r=arr.size()-1;
    int index=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]>number){
            index=mid;
            r=mid-1;
        }
        else if(arr[mid]<=number){
            l=mid+1;
        }
    }
    return index;
}
    int findBestValue(vector<int>& arr, int target) {
     sort(arr.begin(),arr.end());
     vector<int>prefix;
     prefix.push_back(arr[0]);
     for(int i=1;i<arr.size();i++){
         prefix.push_back(arr[i]+prefix[i-1]);
     }
     int ans=INT_MAX;
     int hope=0;
     for(int i=0;i<=target;i++){
         int index=bs(arr,i);
         int res;
         if(index>0) res=prefix[index-1]+(arr.size()-index)*i;
         if(index==0)res=(arr.size()-index)*i;
         if(index==-1)res=prefix[arr.size()-1];
         if(ans>abs(res-target)){
             ans=abs(res-target);
             hope=i;
         }
     }
     return hope;
    }
};
