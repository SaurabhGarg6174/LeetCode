class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        int n = students.size();
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        int i = 0; //traverse the sandwiches array
        int count = 0;
        while(q.size()>0 && count!=q.size()){
            if(q.front()==sandwiches[i]){
                count = 0;
                q.pop();
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();

    }
};



// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
//         queue<int> q;
//         stack<int> st;
//         int n = students.size();
//         for(int i = 0; i < n; i++) {
//             st.push(sandwiches[n - i - 1]);
//             q.push(students[i]);
//         }
//         int i = 0; 
//         while (!st.empty() && i < n) {
//             if (q.front() == st.top()) {
//                 st.pop();
//                 q.pop();
//                 i=0;
//             } 
//             else {
//                 q.push(q.front());
//                 q.pop();
//                 i++;
//             } 
//         }

//         return st.size();
//     }
// };
