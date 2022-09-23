class Solution {
    int getMSB(int n){
        int msb = 0;
        for(int i=0; i<18; i++){
            if ((n>>i) & 1){
                msb = i;
            }
        }
        return msb+1;
    }
public:
    int concatenatedBinary(int n) {
        int ans = 0;
        int mul = 1;
        int mod = 1e9 + 7;
        for(long i = n; i>=1; i--){
            ans = (ans + (i*mul)%mod)%mod;
            int bits = getMSB(i);
            for(int j=0; j<bits; j++){
                mul = (mul*2)%mod;
            }
        }
        return ans;
    }
};