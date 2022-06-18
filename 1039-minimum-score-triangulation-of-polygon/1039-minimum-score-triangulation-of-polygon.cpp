// class Solution {
// public:
//     int solve (vector<int>& values, int i, int j,vector<vector<int>>&dp){
//         if(i>=j){
//             return 0;
//         }
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         int mini =INT_MAX;;
        
//         for(int k=i;i<=j-1; j++){
//           int temp = solve(values,i,k,dp)+ solve(values,k+1,j,dp) + values[i-1]*values[k]*values[j];
//              mini = min(mini,temp);
//         }
       
//         return  dp[i][j]=mini;
//     }
    
//     int minScoreTriangulation(vector<int>& values) {
//         int n = values.size();
//         vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
//         return  solve(values,1,n-1,dp);
//     }
// };
class Solution {
public:
    
    // int dp[51][51];
    
    int solve(vector<int>&values, int i, int j,vector<vector<int>>&dp)
    {
        if(i>=j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans = INT_MAX;
        
        for(int k=i;k<=j-1;k++)
        {
            int temp = solve(values,i,k,dp) + solve(values,k+1,j,dp) + values[i-1]*values[j]*values[k];
                
            ans = min(ans,temp);
        }
        dp[i][j] = ans;
        return dp[i][j];
    }
    
    int minScoreTriangulation(vector<int>& values) {
        
        int n = values.size();
        
        int i = 1;
        int j = n-1;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        // memset(dp,-1,sizeof(dp));
        return solve(values,i,j,dp);
        
    }
};