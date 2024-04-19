class Solution {    
public:
    void findLand(vector<vector<char>>& grid, int i, int j){
        int n = grid[0].size();
        int m = grid.size();

        if(i<0 || i >= m || j<0 || j >= n || grid[i][j] == '0'|| grid[i][j] == '2'){
            return;
        }
        grid[i][j] = '2';
        vector<int> d_row = {0,-1,0,1};
        vector<int> d_col = {-1,0,1,0};

        for(int k = 0; k < 4; k++){
            int row = i + d_row[k];
            int col = j + d_col[k];
            findLand(grid, row, col);
        }

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid[0].size();
        int m = grid.size();
        int ans = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1'){
                    findLand(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};