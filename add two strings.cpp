class Solution {
public:
    string addStrings(string nu1, string nu2) {
        string t="";
        reverse(nu1.begin(),nu1.end());
         reverse(nu2.begin(),nu2.end());
         int c=0;
        string num1,num2;
        if(nu1.length()<=nu2.length()){
             num1 = nu1;
             num2 = nu2;
        }else{
             num1 = nu2;
             num2 = nu1;
        }
        
   
        if(num1.length()<num2.length()){
            int n = num1.length();
           
        for(int i=0;i<n;i++){
            int x =(num1[i]-'0')+(num2[i]-'0')+c;
            t+=x%10+'0';
            if(x>9)
                c=1;
            else
                c=0;
            
        
            }
             for(int i=n;i<num2.length();i++){
                 if(c == 1){
                     
                     int x = 1 + (num2[i]-'0');
                      t+=to_string(x%10);
                      if(x>9)
                        c=1;
                      else
                        c=0;
                
             }
              else{
                t+=(num2[i]);
                 
               }
             }
            if(c==1)t+='1';
           
      }
       else {
            int n = num1.length();
           
        for(int i=0;i<n;i++){
            int x =(num1[i]-'0')+(num2[i]-'0')+c;
            t+=x%10+'0';
            if(x>9)
                c=1;
            else
                c=0;
            
        
            }
             for(int i=n;i<num2.length();i++){
                 if(c == 1){
                     int x = 1 + (num2[i]-'0');
                      t+=to_string(x%10);
                    if(x>0)c=1;
                     else
                    c=0;
             }
              else{
                  t+=num2[i];
                  c=0;
                 }
             }
           if(c == 1)
               t+='1';
       }
        reverse(t.begin(),t.end());
            return t;
    }
};
