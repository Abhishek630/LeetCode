class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        
//         int global = 0;
//         int local =0;
        
//         int i=0;
//         int j=1;
        
//         while(i<n-1 && j<n){
//             if(nums[i]>nums[j]){
//                 global++;
//             }
//             if(nums[i]<nums[i+1]){
//                 local++;
//             }
//             i++;
//             j++;
//         }
        
        for(int i=0;i<n ;i++){
            if(abs(nums[i]-i)>1){
                return false;
            }
        }
        
        // i=0;
        // while(i<n-1){
        //     if(nums[i]>nums[i+1]){
        //         local++;
        //         i++;
        //     }
        // }
        
        // if(global== local){
        //     return true;
        // }
        
        return true;
    }
};