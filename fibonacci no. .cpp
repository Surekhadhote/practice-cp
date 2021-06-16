class Solution {
public:
    int fib(int n) {
    int a =0;
        if(n==0)return a;
    int b=1;
        if(n==1)return b;
    int c ;
        if(n==2)return a+b;
        while(n>1){
            c = a+b;
            a = b;
            b = c;
            n--;
        }
        return c;
    }
};
