class Solution {
public:
vector<int> getRow(int n) {
  vector<int> v;
    long c=1;
    for(int i=1;i<=n+1;i++){
        c=1;
        
         if(i == n+1){
        for(int j=1;j<=i;j++){
             v.push_back(c);
            c = c * (i - j) / j;
            }
        }
        
    }
return v;
    }
};
