class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        vector<int> commonCnt(26);
        int n = words.size();
        for(char& c : words[0]){
            commonCnt[c - 'a']++;
        }
        for(int i = 1; i < n; i++){
            vector<int> currCnt(26, 0);
            for(char& c : words[i]){
                currCnt[c - 'a']++;
            }

            for(int letter = 0; letter<26; letter++){
                commonCnt[letter] = min(commonCnt[letter], currCnt[letter]);
            }

        }
            for(int letter = 0; letter<26; letter++){
                for(int cnt = 0; cnt<commonCnt[letter]; cnt++){
                    ans.push_back(string(1, letter + 'a'));
                }   
            }        
        return ans;
    }
};