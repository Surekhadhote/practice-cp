class Solution {
public:
    bool isPalindrome(string str) {
   int s=0,e=str.length()-1;
while(s<=e)
{
while(s<e&&!isalnum(str[s]))
s++;
while(s<e&&!isalnum(str[e]))
e--;
if(toupper(str[e])!=toupper(str[s]))
return false;
s++;
e--;
}
return true;
}
};
