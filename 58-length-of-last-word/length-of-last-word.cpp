class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length(), cnt = 0;
        int i = n-1, j;
        while(i>=0){
            if(s[i] != ' '){
                j = i;
                while(j>=0 && s[j] != ' '){
                    cnt++;
                    j--;
                }
                break;
            }
            i--;
        }

        return cnt;

    }
};