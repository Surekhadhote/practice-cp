class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if (n == 0) return true;
        if (f.size() == 0) return false;
        if (f.size() == 1) return f[0] == 0;
        f.push_back(0);
        f.insert(f.begin(),0); 
        
     for(int i=0;i<f.size()-2;i++) {
     
         
            if(f[i]==0&&f[i+1]==0&&f[i+2]==0) 
            {
                f[i+1]=1; n--;
            }
         if(n==0)return true;
         
     }
        if(n==0)return true;
        return false;
    }
};
