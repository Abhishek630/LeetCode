class Solution {
public:
    int solve(string &s,int i, int j, vector<vector<int>>&dp){
        // int left = -1;
        // int right =-1;
        if(i>=j){
            dp[i][j]=0;
            return 0;
        }
        
        if(isPal(s,i,j)){
            dp[i][j]=0;
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int mini = INT_MAX;
        
        for(int k=i;k<j;k++){
//             if(dp[i][k]!=-1){
//                 left = dp[i][k];
//             }
//             else{
//                left = solve(s,i,k,dp);
//                 dp[i][k]= left;
//             }
            
//              if(dp[k+1][j]!=-1){
//                 right = dp[k+1][j];
//             }
//             else{
//                right = solve(s,k+1,j,dp);
//                 dp[k+1][j]= right;
//             }
            // if(!isPal(s,i,k)){
            //     continue;
            // }
            if(!isPal(s,k+1,j)){
                continue;
            }
            int temp = 1+solve(s,i,k,dp)+solve(s,k+1,j,dp);
            // int temp = 1+left+right;
            mini= min(mini,temp);
        }
        return dp[i][j]=mini;
    }
    
    int minCut(string s) {
        int n = s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(s,0,n-1,dp);
    }
    
    bool isPal(string &s, int i , int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};