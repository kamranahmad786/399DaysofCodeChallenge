class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries)
{
        vector<int>v;
        int n=queries.size();
        int m=points.size();
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                int x=queries[i][0];
                int y=queries[i][1];
                int r=queries[i][2];
                int p=points[j][0];
                int q=points[j][1];
                double d=sqrt(pow(x-p,2)+pow(y-q,2));
                if(d<=r)
                    c++;
            }
            v.push_back(c);
        }
        return v; 
    }
};
