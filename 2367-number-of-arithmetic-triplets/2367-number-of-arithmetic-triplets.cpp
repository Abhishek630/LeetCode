class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        unordered_set<int>s;
        
        for(int i=0; i<n;i++){
            s.insert(nums[i]);
        }
        int count =0;
        
        for(int i=0;i<n;i++){
            if(s.find(nums[i]+diff)!= s.end() && s.find(nums[i]-diff)!=s.end()){
                count++;
            }
        }
        return count;
    }
};