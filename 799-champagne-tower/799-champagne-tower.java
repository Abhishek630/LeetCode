class Solution {
    public double champagneTower(int poured, int query_row, int query_glass) {
        
        double glass[][] = new double[query_row+1][query_glass+2];
        glass[0][0] = poured;
        
        for(int i=0; i<query_row;i++){
            for(int j=0; j<=query_glass;j++){
                if(glass[i][j]>1.0){
                    double rem = glass[i][j]-1;
                    glass[i+1][j] += rem/2;
                    glass[i+1][j+1] += rem/2;
                }
            }
        }
        return Math.min(glass[query_row][query_glass],1.0);
//          if(k == 0) return 0;
//         double[][] dp = new double[r+1][c+2];
//         dp[0][0] = k;//putting all the water in the top of the matrix
        
//         for(int i = 0 ; i < r ; i++){
//             for(int j = 0 ; j <= c ;  j++){
//                 if(dp[i][j] > 1.0){//then divide the spare one
//                     double spare = dp[i][j] - 1;//as this one will be there only in the glass
//                     spare /= 2;//sapre will be equally divided
//                     dp[i][j] = 1;//holding accoring to its capacity
//                     dp[i+1][j] += spare;//left side having the half of extra water + add extra water
//                     dp[i+1][j+1] += spare;//right side with the half one
//                 }
//             }
//         }
//         return Math.min(dp[r][c],1.0); 
        
    }
}