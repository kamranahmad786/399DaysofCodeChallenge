class Solution {
public:
    int minOperations(int n) {
        int a=n/2;
        if(n%2 == 0){
            return a*(2*1+(a-1)*2)/2;
        }else{
            return a*(2*2+(a-1)*2)/2;
        }
    }
};
