class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v;
    reverse(digits.begin(),digits.end());
            digits[0]=digits[0]+1;
            if(digits[0]<=9){
                 reverse(digits.begin(),digits.end());
            return digits;
            }else{
                int i=0;
              int c = 0;
                while(i<digits.size()){
                    if(digits[i]>9){
                        v.push_back(0);
                         c = 1;
                        if(i+1==digits.size()){
                             v.push_back(1);
                            reverse(v.begin(),v.end());
                             return v;
                        }
                         digits[i+1]=digits[i+1]+1;
                    }else{
                        c=0;
                     v.push_back(digits[i]);
                 }
                    i++;
                    
                    
                }
            }
        
         reverse(v.begin(),v.end());
        return v;
        
    }
};
