class Solution {
    public int maxArea(int[] height) {
       int left = 0;
        int right = height.length - 1;
        int max = 0;
        while(left < right){
            int w = right - left;
            int h = Math.min(height[left], height[right]);
            int area = h * w;
            max = Math.max(max, area);
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else {
                left++;
                right--;
            }
        }
        return max;
    }
}
/*
int n = height.length;
        int left =0;
        int right = n-1;
        int res=0;=
        
        while(left<right){
            int width = right-left;
            int h = Math.min(height[left], height[right]);
            
            int area = width*h;
            res = Math.max(res, area);
            
            if(height[left]<height[right]){
                left++;
            }
            else if(height[left]> height[left]){
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        return res;
        */