class Solution {
public:
    double average(vector<int>& salary) {
        double ans;
        sort(salary.begin(),salary.end());
        salary.pop_back();
        salary.erase(salary.begin());
        double sum=0;
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];

        }
        ans=sum/salary.size();
        return ans;
    }
};
