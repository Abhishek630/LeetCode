class Solution {
    public int numberOfArithmeticSlices(int[] nums) {
        int n = nums.length;
        int total =0;
        // int [] dp = new int [n+1];
        
        // dp[0] =0;
        // dp[1] =0;
        int prev =0;
        for(int i=2;i<n;i++){
            if(nums[i]- nums[i-1]== nums[i-1]-nums[i-2]){
                // dp[i]= dp[i-1]+1;
                prev = prev+1;
            }
            else{
                prev=0;
            }
         total = total+prev;   
        }
        // int sum =0;
        // for(int i=0; i<n;i++){
        //     sum = sum+dp[i];
        // }
        // return sum;
        return total;
    }
}