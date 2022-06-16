class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size();
        int n= nums2.size();
        int dp[m+1][n+1];
        
        // initialization
        for(int i=0;i<=m;i++)
            dp[i][0]=0;   // Eg LCS of "abc" & "" = 0
        for(int j=0;j<=n;j++)
            dp[0][j]=0;   // Eg LCS of "" & "abc" = 0
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(nums1[i-1]==nums2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=0;                   // ONLY THIS CHANGE
            }
        }
    	 int maxLen=0;              // Now finding the max element
         for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
               maxLen=max(maxLen,dp[i][j]);
        }
        return maxLen;
       
        
//         int n = nums1.size();
//         int m = nums2.size();
//          vector<vector<int>>dp(102,vector<int>(102,-1));
        
//         for(int i=0; i<=n;i++){
//             dp[i][0]=0;
//         }
        
//          for(int i=0; i<=m;i++){
//             dp[0][i]=0;
//         }
        
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 if(nums1[i-1]== nums2[j-1]){
//                     dp[i][j] =1+dp[i-1][j-1];
//                 }
//                 else{
//                     dp[i][j]=0;
//                 }
//             }
//         }
        
//         int count =0;
//           for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                count = max(count,dp[i][j]);
//             }
//         }
//         return count;
    }
};