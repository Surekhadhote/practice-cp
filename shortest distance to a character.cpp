class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
     vector<int> v;
    int prev = -32767;
        int n= s.length();
        for(int i=0;i<n;i++){
            if(s[i] == c)prev =i;
            v.push_back(abs(i-prev));
        }
        for(int i = n-1;i>=0;i--){
            if(s[i] == c)prev = i;
            v[i] = min(v[i] , abs(prev-i));
        }
    return v;
    }
};
