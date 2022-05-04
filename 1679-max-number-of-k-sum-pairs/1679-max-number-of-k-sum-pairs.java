class Solution {
    public int maxOperations(int[] nums, int k) {
        int n = nums.length;
        HashMap<Integer, Integer> h = new HashMap();
        int count =0;
        
        for(int i=0; i<n ;i++){
            if(h.containsKey(k-nums[i]) && h.get(k-nums[i])>0){
                count++;
                h.put(k-nums[i],h.get(k-nums[i])-1);
            }
            else{
                 h.put(nums[i],h.getOrDefault(nums[i],0)+1);
            }
        }
        return count;
    }
}