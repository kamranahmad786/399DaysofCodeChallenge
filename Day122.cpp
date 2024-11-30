class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0;
        int j=0;
        while(i<name.size() && j<typed.size())
        {
            if(name[i]!=typed[j]) return false;
            int count1=1;
            while(i<name.size()-1 && name[i]==name[i+1])
            {
                count1++;
                i++;
            }
            int count2=1;
            while(j<typed.size()-1 && typed[j]==typed[j+1])
            {
                count2++;
                j++;
            }
            if(count1>count2) return false;
            i++;
            j++;
        }
        if(i<name.size() || j<typed.size()) return false;
        return true;
    }
};
