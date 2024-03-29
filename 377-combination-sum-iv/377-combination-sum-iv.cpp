class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>dp(target+1,-1);
        return solve(nums, target,n,dp);
    }
    
    int solve(vector<int>& nums, int target, int n, vector<int>&dp){
        if(target == 0){
            return 1;
        }
        if(target<0){
            return 0;
        }
        if(dp[target]!=-1){
            return dp[target];
        }
        int ans =0;
        for(int i=0; i<n;i++){
            ans = ans+ solve(nums,target-nums[i],n,dp);
        }
        dp[target]= ans;
        return ans;
    }
};

// class Solution {
// public:
//     int noOfWays(vector<int> &nums, int target, int size, vector<int> &dp)
//     {
//         if(target < 0) return 0; 
//         if(target == 0) return 1;
//         if(dp[target] != -1) return dp[target]; //IF WE ALREADY CALCULATED THE TARGET
        
//         int ways = 0;   //NO. OF WAYS IN WHICH WE CAN FIND THE TARGET.
//         for(int i = 0; i<size; i++)
//         {
//             ways += noOfWays(nums, target - nums[i], size, dp);
//         }
//         dp[target] = ways;  //BEFORE RETURNING STORE THE WAYS IN THE dp[];
//         return ways;
//     }
//     int combinationSum4(vector<int>& nums, int target) {
        
//         vector<int> dp (target+1, -1); //STORE THE NO OF WAYS IN WHICH WE GET ith INDEX SUM;
//         return noOfWays(nums, target, nums.size(), dp);
//     }
// };