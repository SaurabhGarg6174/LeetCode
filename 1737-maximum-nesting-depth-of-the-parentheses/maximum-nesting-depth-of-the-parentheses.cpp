class Solution {
public:
    int maxDepth(string s) {
        // stack<char> stack;
        int ans = 0, cnt = 0;
        int n = s.length();

        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                cnt++;
            }
            if(s[i] == ')'){
                ans = max(cnt, ans);
                cnt--;
            }
        }
        return ans;
    }
};