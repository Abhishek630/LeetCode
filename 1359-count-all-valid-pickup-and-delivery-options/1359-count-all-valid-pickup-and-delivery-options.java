class Solution {
    public int countOrders(int n) {
        int mod =1_000_000_007;
        if(n==0){
            return 1;
        }
        
        long ans = (long)n*(2*n-1)%mod;
        ans = ans*countOrders(n-1) %mod;
        
        return (int)ans;
    }
}