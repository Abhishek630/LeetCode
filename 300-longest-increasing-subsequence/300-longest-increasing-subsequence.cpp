class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        // return lis(0,-1,nums,size,dp);
        
        for(int i=n-1;i>=0;i--){
            for(int prev =i-1;prev>=-1;prev--){
                int len= dp[i+1][prev+1];
        
                if(prev==-1 || nums[i]>nums[prev]){
                   len = max(len,1+dp[i+1][i+1]);
                 }
             dp[i][prev+1]= len;
            }
        }
        return dp[0][0];
    }
                                             
    
//     int lis(int index, int prev, vector<int>& nums, int size,vector<vector<int>>&dp){
//         if(index== size){
//             return 0;
//         }
        
//         if(dp[index][prev+1]!=-1){
//             return dp[index][prev+1];
//         }
//         //notpick
//         int len= lis(index+1,prev,nums,size,dp);
        
//         if(prev==-1 || nums[index]>nums[prev]){
//             len = max(len,1+lis(index+1,index,nums,size,dp));
//         }
//         return dp[index][prev+1]= len;
//     }
};