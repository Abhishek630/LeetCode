class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        string s2= s;
        reverse(s2.begin(), s2.end());
        int ans = lcs(s,s2);
        return n-ans;
    }
    
    
    int lcs(string s, string s2){
        int n = s.size();
        int dp[n+1][n+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j = 0;j<=n;j++)
            {
                if(i==0 || j==0) dp[i][j] = 0;
            }
        }
        
        for(int i=1; i<=n; i++)
        {
            for(int j =1; j<=n;j++) 
            {
                if(s[i-1] == s2[j-1]) dp[i][j] = 1+dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[n][n];
    }
};