
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> deadSet(deadends.begin(), deadends.end());
        unordered_set<string> visited;
        queue<string> wheel;
        int result = 0;

        if (deadSet.find("0000") != deadSet.end()) {
            return -1;
        }

        wheel.push("0000");
        visited.insert("0000");

        while (!wheel.empty()) {
            int len = wheel.size();
            while (len--) {
                string curr = wheel.front();
                wheel.pop();

                if (curr == target)
                    return result;

                for (int i = 0; i < 4; i++) {
                    string up = curr, down = curr;
                    // char upCh = up[i], downCh = down[i];
                    up[i] = curr[i] == '9' ? '0' : curr[i] + 1;
                    down[i] = curr[i] == '0' ? '9' : curr[i] - 1;

                    if (visited.find(up) == visited.end() &&
                        deadSet.find(up) == deadSet.end()) {
                        visited.insert(up);
                        wheel.push(up);
                    }
                    if (visited.find(down) == visited.end() &&
                        deadSet.find(down) == deadSet.end()) {
                        visited.insert(down);
                        wheel.push(down);
                    }
                }
            }
            result++;
        }
        return -1;
    }
};