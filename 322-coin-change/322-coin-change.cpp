class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size()+1, vector<int>(amount+1,-1));
        int ans = helper(coins,amount,dp,coins.size()-1);
        return (ans< INT_MAX-1)? ans:-1;
    }
    
    int helper(vector<int>& coins, int amount,vector<vector<int>> &dp, int n){
        if(amount ==0){
            return 0;
        }
        
        if(n<0 || amount<0){
            return INT_MAX-1;
        }
        
        if(dp[n][amount] !=-1){
            return dp[n][amount];
        }
        
        int notpick = helper(coins,amount,dp,n-1);
        int pick = 1+helper(coins,amount-coins[n], dp, n);
       
        dp[n][amount]= min(pick,notpick);
        return dp[n][amount];
    }
};

 
