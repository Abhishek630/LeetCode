class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int mintime =0;
        int n = points.length-1;
        
        for(int i=0;i<n;i++){
            int x = Math.abs(points[i][0]- points[i+1][0]);
            int y = Math.abs(points[i][1]- points[i+1][1]);
            mintime = mintime + Math.max(x,y);
        }
        return mintime;
        
    }
}