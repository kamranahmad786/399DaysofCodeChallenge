class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int count = 0;
        while(i<bits.size()){
            if(bits[i] ==1){
                count = count+2;
                i = i+2;
            }
            else if(bits[i] ==0){
                count = 0;
                i = i + 1;
            }
        }
        if(count == 0){
            return true;
        }
        return false;
    }
};
