class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    vector<string> v;
        vector<int> main(26,INT_MAX);
        for(auto i : words){
            vector<int> temp(26,0);
            for(auto j : i){
                temp[j -'a']++;
            }
            for(int k=0;k<26;k++){
                main[k] = min(main[k],temp[k]);
            }
        }
        
        for(int i=0;i<main.size();i++){
            while(main[i]>0){
              v.push_back(string(1,(i+'a')));
                main[i]--;
            }
        }
        
        return v;
        
    }
};
