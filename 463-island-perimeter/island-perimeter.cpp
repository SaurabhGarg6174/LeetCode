class Solution {
    /*int checkSurr(int i, int j, vector<vector<int>>& grid){
        int surr = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<int> d_row = {0, -1, 0, 1};
        vector<int> d_col = {-1, 0, 1, 0};
        for(int k = 0; k < 4; k++){
            int n_row = i + d_row[k];
            int n_col = j + d_col[k];
            if(n_row >= 0 && n_row < n && n_col >= 0 && n_col < m){
                if(grid[n_row][n_col] == 1){
                    surr++;
                }
            }
        }
        return surr;
    }*/
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    ans+=4;
                    if(i > 0 && grid[i-1][j] == 1) ans -= 2;
                    if(j > 0 && grid[i][j-1] == 1) ans -= 2;
                } 
            }
        }
        /*int surr;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    surr = checkSurr(i, j, grid);
                    ans += 4-surr;
                }
            }
        }*/
        return ans;
    }
};