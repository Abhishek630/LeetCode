class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int len1 =text1.size();
        int len2 = text2.size();
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        return lcs(text1, text2,len1,len2,dp);
    }
    
    int lcs(string &text1, string &text2, int len1, int len2, vector<vector<int>>&dp){
        
        if(len1==0 || len2==0){
            return 0;
        }
        
        if(dp[len1][len2]!=-1){
            return dp[len1][len2];
        }
        
        if(text1[len1-1]== text2[len2-1]){
            return dp[len1][len2]= 1+lcs(text1,text2,len1-1,len2-1,dp);
        }
        else{
            return dp[len1][len2]= max(lcs(text1,text2,len1-1,len2,dp),lcs(text1, text2, len1, len2-1,dp));
        }
    }
};