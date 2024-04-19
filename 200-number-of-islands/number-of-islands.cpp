class Solution {    
public:
    void findLand(vector<vector<char>>& grid,vector<vector<char>>& vis, int i, int j){
        int n = grid[0].size();
        int m = grid.size();

        if(i<0 || i >= m || j<0 || j >= n || grid[i][j] == '0' || vis[i][j] == '1'){
            return;
        }

        vis[i][j] = '1';
        vector<int> d_row = {0,-1,0,1};
        vector<int> d_col = {-1,0,1,0};

        for(int k = 0; k < 4; k++){
            int row = i + d_row[k];
            int col = j + d_col[k];
            findLand(grid, vis, row, col);
        }

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid[0].size();
        int m = grid.size();
        int ans = 0;
        vector<vector<char>> vis(m, vector<char>(n, '0'));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1' && vis[i][j] != '1'){
                    findLand(grid, vis, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};