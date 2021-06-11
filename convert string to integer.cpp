class Solution {
public:
      std::string trim(const std::string &s)
{
    auto start = s.begin();
    while (start != s.end() && std::isspace(*start)) {
        start++;
    }
 
    auto end = s.end();
    do {
        end--;
    } while (std::distance(start, end) > 0 && std::isspace(*end));
 
    return std::string(start, end + 1);
}
    
    int myAtoi(string t2) {
       string t;
         string s = trim(t2);
       
        if(s.length() == 0||(s.length() == 1 && s[0] == ' '))return 0;
        
        for(int i=0;i<s.length();i++){
            
            if((s[i] >='0'&&s[i]<='9')||s[i] == '-'||s[i] == '+'){
                t+=s[i];
               
                if(!(s[i+1] >='0'&&s[i+1]<='9') )break;
                
            
            }else if(s[0] != ' '&&!(s[0] >='0'&&s[0]<='9')&&s[0] != '-')
                return 0;
           }
        
            
        
        cout<<t;
       
        
        try {
       int x = stoi(t);
             return x;
    
   }
  catch(exception e){
      
     
       if (t[0] == '-' && s[1] =='+')
      {
         return 0;
            
      }
      if (t[0] == '+' && s[1] =='-')
      {
         return 0;
            
      }else if(t[0] == '-'){
           if(t.length() == 1)return 0;
          
         return INT_MIN;}
    else if(t[0]=='+'){
                if(t.length() == 1)return 0;
                if(t.length() == 0)return 0;
      
        return INT_MAX;
            }else  return INT_MAX;
        
  }
        
        
       
