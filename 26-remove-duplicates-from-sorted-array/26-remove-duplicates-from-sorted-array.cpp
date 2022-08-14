class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        
        for(int i=1; i<n;i++){
            if(nums[i]==nums[i-1]){
                ans++;
            }
            else{
                nums[i-ans]= nums[i];
            }
        }
        return n-ans;
    }
};