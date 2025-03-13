// https://leetcode.com/problems/unique-paths-ii/description/

// Recursion + Memoization

class Solution {
    public:
        vector<vector<int>> dp;
        int solve(int n, int m, vector<vector<int>>& grid){
            int row = grid.size();
            int col = grid[0].size();
            if(n>=row || m>=col || grid[n][m]==1){
                return 0;
            }else if(n==row-1 && m==col-1){
                return 1;
            }
    
            if(dp[n][m] != -1) return dp[n][m];
            
            int right = solve(n,m+1,grid);
            int down = solve(n+1,m,grid);
    
            return dp[n][m] = right + down;
        }
        int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            int row = obstacleGrid.size();
            int col = obstacleGrid[0].size();
    
            dp.resize(row, vector<int> (col, -1));
    
            return solve(0,0, obstacleGrid);
        }
    };

// TC: O(m*n)
// SC: O(m*n)

// Bottom Up

class Solution {
    public:
        int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    
            int row = obstacleGrid.size();
            int col = obstacleGrid[0].size();
            
            if(obstacleGrid[0][0]==1) return 0;
    
            vector<vector<int>> computedGrid(row, vector<int> (col,0));
    
            computedGrid[0][0] = 1;
    
            for(int i=1;i<col;i++){
                if(obstacleGrid[0][i]==1){
                    computedGrid[0][i]=0;
                }else{
                    computedGrid[0][i] = computedGrid[0][i-1];
                }
            }
            for(int i=1;i<row;i++){
                if(obstacleGrid[i][0]==1){
                    computedGrid[i][0]=0;
                }else{
                    computedGrid[i][0] = computedGrid[i-1][0];
                }   
            }
    
            for(int i=1;i<row;i++){
                for(int j=1;j<col;j++){
                    if(obstacleGrid[i][j]==1){
                        computedGrid[i][j] = 0;
                    }else{
                        computedGrid[i][j] = computedGrid[i-1][j] + computedGrid[i][j-1];
                    }
                }
            }
            return computedGrid[row-1][col-1];
        }
    };

// TC: O(m*n)
// SC: O(m*n)
