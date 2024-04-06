class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> ctnr;
        int n = s.length();
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                ctnr.push(i);
            }
            else if(s[i]==')'){
                if(!ctnr.empty()) ctnr.pop();
                else{
                    s.erase(i, 1);
                    i--;
                }
            }
        }
        while(!ctnr.empty()) {
            s.erase(ctnr.top(), 1);
            ctnr.pop();
        }
        return s;
    }
};
