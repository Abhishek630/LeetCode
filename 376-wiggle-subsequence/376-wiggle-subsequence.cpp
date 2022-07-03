class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int pos =1;
        int neg =1;
        
        for(int i=1; i<nums.size(); i++){
            int diff = nums[i]-nums[i-1];
            if(diff<0){
                pos = max(pos,neg+1);
            }
            else if(diff>0){
                neg = max(neg,pos+1);
            }
        }
        return max(pos,neg);
    }
};