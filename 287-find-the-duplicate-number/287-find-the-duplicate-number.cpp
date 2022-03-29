class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int freq[n];
        int ind =0;
        
        for(int i=0; i<n ;i++){
            freq[i]=0;
        }
        
        for(int i=0; i<n; i++){
            if(freq[nums[i]]==0){
                freq[nums[i]]=1;
            }
            else{
                return nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(freq[i]>1){
                ind =i;
                break;
            }
        }
        return ind;
    }
};