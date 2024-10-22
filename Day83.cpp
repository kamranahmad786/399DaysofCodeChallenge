class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int timeForHouseM=0;
        int timeForPickM=0;
        int timeForHouseP=0;
        int timeForPickP=0;
        int timeForHouseG=0;
        int timeForPickG=0;
        for(int i=0;i<garbage.size();i++){
            int j=0;
            while(garbage[i].size()-1>=j){
                if(garbage[i][j]=='P'){
                  timeForPickP++;
                  timeForHouseP=i;
                }
                else if(garbage[i][j]=='G'){
                  timeForPickG++;
                  timeForHouseG=i;
                }
                else if(garbage[i][j]=='M'){
                  timeForPickM++;
                  timeForHouseM=i;
                }
                j++;
            }
        }        
        int timeForHouse=0;
        for(int i=0;i<timeForHouseG;i++){
            timeForHouse+=travel[i];
        }
        for(int i=0;i<timeForHouseP;i++){
            timeForHouse+=travel[i];
        }
        for(int i=0;i<timeForHouseM;i++){
            timeForHouse+=travel[i];
        }
        return timeForHouse+timeForPickM+timeForPickP+timeForPickG;
    }
};
