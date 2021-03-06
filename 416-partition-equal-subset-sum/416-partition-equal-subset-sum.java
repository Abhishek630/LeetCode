class Solution {
    public boolean isSubset(int[]nums, int n , int sum){
        boolean t[][] = new boolean[n+1][sum+1];
        
        for(int i=0; i<=n;i++){
            t[i][0]= true;
        }
        
        for(int i=0; i<=sum ;i++){
            t[0][i]= false;
        }
        boolean ans =false;
        
        for(int i=1; i<n+1;i++){
            for(int j=1; j<sum+1; j++){
                if(nums[i-1]<=j){
                    t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
                }
                else{
                    t[i][j]= t[i-1][j];
                }
            }
        }
        
        return t[n][sum];
    }
    
    
    public boolean canPartition(int[] nums) {
        int n = nums.length;
        int sum =0;
        for(int i=0; i<n ;i++){
            sum =sum+nums[i];
        }
        
        if(sum%2!=0){
            return false;
        }
        else{
            return isSubset(nums,n ,sum/2);
        }
    }
}