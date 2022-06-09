class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n = numbers.length;
        int[] res = new int[2];
        int start =0;
        int end = n-1;
        int sum =0;
        for(int i=1;i<n;i++){
            sum = numbers[start]+numbers[end];
            if(sum==target){
                res[0]=start+1;
                res[1]=end+1;
            }
            if(sum>target){
                end--;
            }
            else{
                start++;
            }
        }
        return res;
    }
}