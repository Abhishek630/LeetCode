class Solution {
    public int fib(int n) {
        // int dp[] = new int [n+1];
    //     for(int i=0;i<n+1;i++){
    //         dp[i]=-1;
    //     }
        if(n<=1){
            return n;
        }
    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }
    //     dp[n] = fib(n-1)+fib(n-2);
    //     return dp[n];
    // }
        
        int prev2 =0;
        int prev=1;
        int curi =0;
         for(int i=2;i<n+1;i++){
            curi = prev+prev2;
             prev2= prev;
             prev = curi;
         }
        return curi;
    }
}