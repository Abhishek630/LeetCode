class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>>dp(size,vector<int>(size+1,-1));
        return lis(0,-1,nums,size,dp);
    }
    
    int lis(int index, int prev, vector<int>& nums, int size,vector<vector<int>>&dp){
        if(index== size){
            return 0;
        }
        
        if(dp[index][prev+1]!=-1){
            return dp[index][prev+1];
        }
        //notpick
        int len= lis(index+1,prev,nums,size,dp);
        
        if(prev==-1 || nums[index]>nums[prev]){
            len = max(len,1+lis(index+1,index,nums,size,dp));
        }
        return dp[index][prev+1]= len;
    }
};