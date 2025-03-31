class Solution {
public:
    string stringHash(string s, int k) {

        string as;
        
        int n = s.size();
        
        for(int i = 0; i < n/k; i++) {
            string c_r = s.substr(i * k, k);
            int sm = 0;
            
    
            for(int j = 0; j < k; j++) {
                sm += c_r[j] - 'a';
            }
            

            sm %= 26;
            as += sm + 'a';
        }
        
        return as;
    }
};
