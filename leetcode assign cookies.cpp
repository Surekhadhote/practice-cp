class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     int j=0,i=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(;j<s.size()&&i<g.size();j++){
            if(s[j]>=g[i])i++;
        }
        return i;
    }
};
