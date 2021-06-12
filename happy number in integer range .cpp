class Solution {
public:
    bool isHappy(int n) {
    int c=0;
     while(n!=1)   {
        int sum =0;
        while(n>0){
            int r = n%10;
            sum = sum + r*r;
            n = n/10;
        }
         if(sum==1)return true;
         n = sum;
         if(c>100)return false;
         c++;
        }
        return true;
    }
};
