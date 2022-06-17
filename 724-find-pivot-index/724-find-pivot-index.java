class Solution {
    public int pivotIndex(int[] nums) {
        int size = nums.length;
        int lsum =0;
        int sum =0;
        
        for(int i=0;i<size;i++){
            sum =sum+nums[i];
        }
        
        for(int i=0; i<size; i++){
            sum = sum-nums[i];
            if(sum == lsum){
                return i;
            }
            lsum =lsum+nums[i];
        }
        return -1;
    }
}