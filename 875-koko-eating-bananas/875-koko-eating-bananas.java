class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int n = piles.length;
        Arrays.sort(piles);
        int s= 1;
        int e = piles[n-1];
        int res= piles[n-1];
        
        while(s<=e){
            int mid = s+(e-s)/2;
            long sum =0;
            
            for(int i=0; i<n; i++){
                sum = sum+ (int)Math.ceil(piles[i]/(double)mid);
            }
            if(sum>h){
                s = mid+1;
            }
            else{
                res= Math.min(res,mid);
                e =mid-1;
            }
        }
        return res;
    }
}