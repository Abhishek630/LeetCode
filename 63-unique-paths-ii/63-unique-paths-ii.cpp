class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        vector<vector<int>>dp(m, vector<int>(n, -1));
        return dfs(obstacleGrid, 0,0, m,n, dp);
    }
    
    int dfs(vector<vector<int>>& obstacleGrid,int i, int j, int m , int n, vector<vector<int>>&dp){
        if(i>=m || j>=n|| obstacleGrid[i][j]==1){
            return 0;
        }
        
        if(i== m-1 && j == n-1){
            return 1;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        else{
            return dp[i][j]=dfs(obstacleGrid, i+1,j, m,n,dp)+dfs(obstacleGrid,i,j+1,m,n,dp);
        }
        
    }
};