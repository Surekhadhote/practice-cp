class Solution {
public:
    int reverse(int x) {
         long n = x;
    string t= "";
   
        if(n==0) return 0;
        else if(n>0){
            while(n>0){
                int r = n%10;
                t+=(r+'0');
                n/=10;
            }
        }else{
            try{
     n=(-1)*n;
            }
            catch(runtime_error e){
                return 0;
            }
       
              while(n>0){cv 
                int r = n%10;
                t+=(r+'0');
                n/=10;
            }
            try{
            return (-1)*stoi(t);
              }
          catch(exception e){
            return 0;
         }
        }
        
        
        
        try{ 
     return stoi(t);
        }
        catch(exception e){
            return 0;
        }
    }
    
};
