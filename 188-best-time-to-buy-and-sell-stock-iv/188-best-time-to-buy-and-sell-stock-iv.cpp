class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>>dp(n, vector<vector<int>>(k+1,vector<int>(2,-1)));
        return solve(k,prices,0,true,dp);
    }
    
    int solve (int k, vector<int>&prices, int index, bool buy,vector<vector<vector<int>>>&dp){
        if(prices.size()== index || k<=0){
            return 0;
        }
        
        if(dp[index][k][buy]!=-1){
            return dp[index][k][buy];
        }
        
        if(buy){
            return dp[index][k][buy] = max(
             -prices[index]+solve(k,prices,index+1,false,dp),
                solve(k,prices,index+1,true,dp)
            );
        }
        else {
            return dp[index][k][buy] = max(
            prices[index]+solve(k-1,prices,index+1,true,dp),
                solve(k,prices,index+1,false,dp)
            );
        }
    }
};