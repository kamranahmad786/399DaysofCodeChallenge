class Solution {
public:
    string reverseVowels(string s) {
        int a=0;  int b=s.size()-1;

        while(a<=b){
            if(s[a]=='a' || s[a]=='e' || s[a]=='i' || s[a]=='o' || s[a]=='u' || s[a]=='A' || s[a]=='E' || s[a]=='I'|| s[a]=='O' || s[a]=='U' )
            {
                if(s[b]=='a' || s[b]=='e' || s[b]=='i' || s[b]=='o' || s[b]=='u' || s[b]=='A' || s[b]=='E' || s[b]=='I'|| s[b]=='O' || s[b]=='U')
                {
                    swap(s[a],s[b]);
                    a++;
                    b--;
                }
                else b--;
            }
            else 
            {
                a++;
            }      
        }
        return s;
    }
};
