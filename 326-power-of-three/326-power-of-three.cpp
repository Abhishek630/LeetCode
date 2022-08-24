class Solution {
public:
    bool isPowerOfThree(int n) {
        // return n > 0 ? pow(3, int(log(n) / log(3))) == n : false;
        // if(n>0){
        //     if(pow(3,int(log(n)/log(3)))==n){
        //         return true;
        //     }
        // }
        // return false;
        if(n<=0){
            return false;
        }
        while(n%3 ==0){
            n=n/3;
        }
        return n==1;
    }
};