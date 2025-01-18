class Solution {
public:
    double angleClock(int hour, int minutes) {
        double mn_Deg = 6*minutes;
        if(hour == 12)
           hour = 0;
        double hr_Deg = double(hour+minutes/60.0)*30;
        double agl_1 = abs(mn_Deg - hr_Deg);
        double agl_2= 360- agl_1;
        return min(agl_1, agl_2);
    }
};
