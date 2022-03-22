class Solution {
    static int MOD= 1_000_000_007;
    public int nthMagicalNumber(int n, int a, int b) {
        long A = a;
        long B =b;
        long l = Math.min(a,b);
        long r = n*l;
        
         while (B > 0) {
            long t = A;
            A = B;
            B = t % B;
        }
        long lcm = (a*b)/A;
        long mid =0;
        long factor =0;
        
        while(l<r){
            mid = l+(r-l)/2;
            factor = (mid/a) + (mid/b) - (mid/lcm);
            if(factor<n){
                l = mid+1;
            }
            else{
                r = mid;
            }   
        }
        
         return (int) (l%MOD);
        
    }
}