class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        HashSet<Integer> s = new  HashSet<>();
        int n = nums.length;
        int sum =0;
        int res =0;
        int i=0;
        int j=0;
        
        while(j<n){
            if(!s.contains(nums[j])){
                s.add(nums[j]);
                sum = sum+nums[j];
                res = Math.max(res,sum);
                j++;
            }
            else{
                s.remove(nums[i]);
                sum = sum-nums[i];
                i++;
            }
        }
        return res;
    }
}