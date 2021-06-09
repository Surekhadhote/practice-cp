class Solution {
public:
int countStudents(vector<int>& students, vector<int>& sand) {
  stack <int> s;
        queue <int> q;
        int rejected =0;
        for(int i=sand.size()-1;i>=0;i--){
            s.push(sand[i]);
        }
         for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        while(!q.empty()){
            if(s.top() == q.front()){
                rejected = 0;
                s.pop();
                q.pop();
           }
            else{
             rejected++;
                q.push(q.front());
                q.pop();
            }
            if(rejected == q.size())return q.size();
        }
    return 0;
    }
};
