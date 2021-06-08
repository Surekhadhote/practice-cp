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

 
 int lengthOfLastWord(string s) {
        int c=0;
        string t ="";
        string t2 = trim(s);
        for(int i=0;i<t2.length();i++){
            if(t2[i]==' '){
                t = "";
                c=0;
            }else{
                t = t+t2[i];
                c++;
            }
              
        }
        
        return c;
    }
};
