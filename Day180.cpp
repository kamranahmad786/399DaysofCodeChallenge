class Solution {
public:
    int bestClosingTime(string customers) {
       int plty = 0;
       for(int i=0; i<customers.size(); i++){
        if(customers[i] == 'Y') plty++;
       } 
       int np = 0;
       int as = plty;
       int icr = 0;
       for(int i=0; i<customers.size();i++){
        if(customers[i]=='Y'){
            plty--;
        }else{
            np++;
        }
        if(as>np+plty){
            icr = i+1;
            as = np+plty;
        }
       }
       return icr;
    }
};
