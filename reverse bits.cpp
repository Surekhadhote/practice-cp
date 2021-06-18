class Solution {
public:
  
    uint32_t reverseBits(uint32_t n) {
        string x = "";
        while(n>0){
            x += n%2 +'0';
            n/=2;
        }
         for(int j=x.length();j<32;j++){
             x+='0';
         }
  
         uint32_t j=0;int k=0;
        for(int i=x.length()-1;i>=0;i--){
            j+=pow(2,k++)*(x[i]-'0');
        }
     
        return j;
  
    }
};
