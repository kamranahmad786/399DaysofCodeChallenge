class Solution {
public:
    string reverseOnlyLetters(string str) {
       int i=0;
       int j=str.length()-1;
       while(i<j)
       {
          if(isalpha(str[i]))
          {
              if(isalpha(str[j]))
              {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
                i++,j--;
              }
              else
              {
                j--;
              }
          }
          else
          {
            i++;
          }          
       }
       return str;
        
    }
};
