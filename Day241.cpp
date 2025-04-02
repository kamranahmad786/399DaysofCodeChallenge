class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0,cap=capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=capacity){
                capacity-=plants[i];
                steps+=1;
            }
            else{
                steps+=i*2+1;
                capacity=cap-plants[i];
            }
        }
        return steps;
    }
};
