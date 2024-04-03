class Solution {
private:
    bool backtrack(int index, int i, int j, vector<vector<char>>& board, string& word, vector<vector<bool>>& visited) {
        if (index == word.length())
            return true;

        int m = board.size();
        int n = board[0].size();

        if (i < 0 || i >= m || j < 0 || j >= n || visited[i][j] || board[i][j] != word[index])
            return false;

        visited[i][j] = true;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        for (int k = 0; k < 4; k++) {
            int ni = i + delrow[k];
            int nj = j + delcol[k];
            if (backtrack(index + 1, ni, nj, board, word, visited))
                return true;
        }

        visited[i][j] = false;
        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(backtrack(0, i, j, board, word, visited))
                    return true;
            }
        }
        return false;
    }
};
