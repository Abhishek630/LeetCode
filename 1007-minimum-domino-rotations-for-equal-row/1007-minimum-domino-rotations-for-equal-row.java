class Solution {
    public int minDominoRotations(int[] tops, int[] bottoms) {
        int res = Integer.MAX_VALUE;
        int n = tops.length;
        
        for(int i=1; i<=6; i++){
            int total = 0;
            int countt = 0;
            int countb = 0;
            for(int j=0; j<n; j++){
                if(tops[j]==i || bottoms[j]==i){
                    total++;
                   if(bottoms[j]!=i){
                    countb++;
                   }    
                   else if (tops[j]!=i){
                    countt++;
                   }
            }
          }
            if(total == n)
            res = Math.min(res, Math.min(countt,countb));
        }
        
        if(res == Integer.MAX_VALUE){
            return -1;
        }
        return res;
    }
}