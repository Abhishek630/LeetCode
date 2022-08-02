class Solution {
    public int kthSmallest(int[][] matrix, int k) {
        int m = matrix.length;
        int n = matrix[0].length;
        
         PriorityQueue<Integer> pq
            = new PriorityQueue<Integer>();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                pq.add(matrix[i][j]);
            }
        }
        for(int i=0;i<k-1;i++){
            pq.poll();
        }
        return pq.peek();
    }
}