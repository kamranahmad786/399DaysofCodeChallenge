class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int i=0;
        int count=1;
        string str="";
        for(int j=1;j<chars.size();j++)
        {
            if(chars[i]!=chars[j])
            {
                if(count>1)
                    str=str+chars[i]+ to_string(count);
                else
                    str=str+chars[i];
                i++;
                chars[i]=chars[j];
                count=1;
            }
            else
                count++;
        }
        if(count>1)
            str=str+chars[i]+to_string(count);
        else
            str=str+chars[i];
        chars.clear();
        for(int k=0;k<str.length();k++)
            chars.push_back(str[k]);
        return str.length();
    }
};
