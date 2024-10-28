class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> s1, s2 ;
        for (int i=0; i<sentence1.size(); i++){
            string temp = "" ;
            while (i<sentence1.size() && sentence1[i] != ' ') temp += sentence1[i++] ;
            s1.push_back(temp) ;
        }

        for (int i=0; i<sentence2.size(); i++){
            string temp = "" ;
            while (i<sentence2.size() && sentence2[i] != ' ') temp += sentence2[i++] ;
            s2.push_back(temp) ;
        }

        if (s1.size() > s2.size()){
            swap(s1, s2) ;
        }

        int left = 0 ;
        while (left<s1.size() && s1[left] == s2[left]) left++ ;

        int right = s1.size()-1 ;
        int r2 = s2.size()-1 ;
        while (right >=0 && s1[right]==s2[r2]){
            right-- ;
            r2-- ;
        }

        return left > right ;
    }
};
