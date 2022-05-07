class Solution {
    public boolean find132pattern(int[] nums) {
        int n = nums.length;
        Stack<Integer>st = new Stack<>();
        int min = Integer.MIN_VALUE;
        
        for(int i= n-1; i>=0; i--){
             if(nums[i]< min){
                 return true;
             }
            while(!st.isEmpty() && st.peek()<nums[i]){
                min = st.pop();
            }
            
            st.push(nums[i]);
        }
        return false;
    }
}