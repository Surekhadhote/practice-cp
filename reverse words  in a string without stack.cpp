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
    
    string reverseWords(string s) {
        string s = trim(ss);
        
        string t="";
        string k = "";
        

        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                while(s[i] == ' ')i++;
                i--;
                k = " "+t+k;
                t="";

            }else{
                t=t+s[i];
            }
        }


        k = t+k;
        
        
        return k;
    }
};
