class Solution {
public:
    bool isPossible(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp,ans;
        
        for(auto x: nums){
            mp[x]++;
        }
        
        for(auto i :nums){
            if(mp[i]==0){
                continue;
            }
            if(ans[i]>0){
                ans[i]--;
                mp[i]--;
                ans[i+1]++;
            }
            else if(mp[i+1]>0 && mp[i+2]>0){
                mp[i]--;
                mp[i+1]--;
                mp[i+2]--;
                ans[i+3]++;
            }
            
            else{
                return false;
            }
        }
        return true;
    }
};