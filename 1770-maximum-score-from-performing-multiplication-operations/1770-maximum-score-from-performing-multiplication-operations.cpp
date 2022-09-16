class Solution {
public:
    vector<vector<int>>dp;
    int recur(vector<int>& nums, vector<int>& multiplier,int m,int ind,int i,int j)
    {
        //Base Condition : If all m operations performed, then return 0
        if(ind==m) 
            return 0;
        
        //if the sub problem is pre-calculated, then return it from the dp table
        if(dp[ind][i]!=INT_MAX)return dp[ind][i];
        
        //else
        //calculate ans1 using staring element
        int ans1=nums[i]*multiplier[ind]+recur(nums,multiplier,m,ind+1,i+1,j);
        
        //calculate ans2 using last element
        int ans2=nums[j]*multiplier[ind]+recur(nums,multiplier,m,ind+1,i,j-1);
        
        //return the max of ans1 and ans2 as answer
        return dp[ind][i]=max(ans1,ans2);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multiplier) {
        int m=multiplier.size(),n=nums.size(),i,j;
        int op=0;
        
        //initialize the dp table
        dp=vector<vector<int>>(m+1,vector<int>(m+1,INT_MAX));
        int ans=0;  //variable to store answer
        
        
        //recusive function
        ans=recur(nums,multiplier,m,0,0,n-1);
        return ans;
    }
};