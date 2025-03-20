class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string r_num1 = num1.substr(0, num1.find('+'));
        string i_num1 = num1.substr(num1.find('+')+1, num1.length()-1);
        string r_num2 = num2.substr(0, num2.find('+'));
        string i_num2 = num2.substr(num2.find('+')+1, num1.length()-1);

        int r1 = stoi(r_num1), r2 = stoi(r_num2), i1 = stoi(i_num1), i2 = stoi(i_num2);

        string res = to_string(r1*r2 - i1*i2) + '+' + to_string(r1*i2 + r2*i1) + 'i';

        return res;
    }
};
