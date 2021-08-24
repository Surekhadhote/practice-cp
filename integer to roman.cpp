class Solution {
public:
    //by checking place values
   string intToRoman(int num) {
    string M[] = {"", "M", "MM", "MMM"};//1000
    string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};//100
    string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};//10
    string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};//1
    return M[num/1000] + C[(num%1000)/100] + X[(num%100)/10] + I[num%10];
   } 
};
