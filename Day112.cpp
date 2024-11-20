class Solution {
public:
    int captureForts(vector<int>& forts) {

        int max_forts = 0, j = 0;
        for(int i = 0; i < forts.size(); i++){

            if(forts[i] == 0){
                if(i != 0)
                    j = i - 1;
                while(i < forts.size() && forts[i] == 0)
                    i++;
                if(i != forts.size() && ((forts[j] == -1 && forts[i] == 1) || (forts[j] == 1 && forts[i] == -1)))
                    max_forts = max(max_forts, (i - j) - 1);
            }
        }

        return max_forts;
    }
};
