class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        int oddCnt = 0;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
            if(mp[s[i]] % 2 == 1){
                oddCnt++;
            }
            else{
                oddCnt--;
            }
        }
        if(oddCnt > 1){
            return s.length() - oddCnt + 1;
        }
        return s.length();
    }
};