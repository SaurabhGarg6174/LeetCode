class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp_s, mp_t;
        int n = s.size();

        for(int i = 0; i<n; i++){
            if(mp_s.find(s[i]) != mp_s.end() && mp_s[s[i]] != t[i]){
                return false;
            }
            if(mp_t.find(t[i]) != mp_t.end() && mp_t[t[i]] != s[i]){
                return false;
            }
            mp_s[s[i]] = t[i];
            mp_t[t[i]] = s[i];
        }
        return true;
    }
};