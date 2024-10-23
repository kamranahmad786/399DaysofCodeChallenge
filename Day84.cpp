class Solution {
public:
    string shiftingLetters(string str, vector<vector<int>>& shifts){
        int n = str.size();
        vector<int> count(n + 1, 0);
        
        for(int i = 0; i < shifts.size(); i++)
        {
            int left = shifts[i][0];
            int right = shifts[i][1];
            int sign = shifts[i][2];
            
            if(sign == 1)
            {
                count[left]++;                
                count[right + 1]--;
            }
            else
            {
                count[left]--;
                count[right + 1]++;
            }
        }
        
        for(int i = 1; i < n; i++)
        {
            count[i] += count[i - 1];
        }
        
        for(int i = 0; i < n; i++)
        {
            int increment = (str[i] - 'a' + count[i]) % 26;
            if(increment < 0)
            {
                increment = (increment + 26) % 26;
            }
            str[i] = 'a' + increment;
        }
        
        return str;
    }
};
