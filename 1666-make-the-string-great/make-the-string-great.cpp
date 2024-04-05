// class Solution {
// public:
//     string makeGood(string s) {
//         int n = s.length();
//         string lower = "abcdefghijklmnopqrstuvwxyz";        
//         string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//         for(int i = 1; i<n-1; i++){
//             int temp = i;
//             for(int j = 0; j<26; j++){
//                 if((s[i] == lower[j] && s[i-1] == upper[j]) || (s[i-1] == lower[j] && s[i] == upper[j])){
//                     for(int k = temp-1; k<n; k++){
//                         s[k] = s[temp+1];
//                         temp++;
//                     }
//                 }
//             }
//         }
//         return s;
//     }
// };
class Solution {
public:
    string makeGood(string s) {
        int n = s.length();
        string lower = "abcdefghijklmnopqrstuvwxyz";        
        string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < 26; j++) {
                if((s[i] == lower[j] && s[i+1] == upper[j]) || (s[i] == upper[j] && s[i+1] == lower[j])) {
                    // Remove the characters at index i and i+1
                    s.erase(i, 2);
                    // Reset i to check for adjacent pairs starting from the beginning
                    i = -1; // It will be incremented to 0 in the next iteration of the outer loop
                    break; // Exit the inner loop since we've already removed a pair
                }
            }
        }
        return s;
    }
};
