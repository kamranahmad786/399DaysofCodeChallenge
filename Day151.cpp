class Solution {
public:
      bool isVowel(char ch){
        ch = toupper(ch);
        return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
      }

    string sortVowels(string y) {
        string x = y;
        vector<int>vowel;
        for(int a=0; a<y.length(); a++){
            if(isVowel(y[a]))
                vowel.push_back((int)y[a]);
        }
            if(vowel.size()==0)
                return y;

            sort(vowel.begin(), vowel.end());
            int b =0;
            for(int a=0; a<x.length(); a++){
                if(isVowel(x[a]))
                    x[a]=(char)
                    vowel[b++];
                }
            return x;
        }
};
