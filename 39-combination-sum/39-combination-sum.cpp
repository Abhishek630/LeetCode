class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int> output;
        solve(candidates, target, ans, output,0);
        return ans;
        
    }
    
    void solve(vector<int> candidates, int target, vector<vector<int>> &ans, vector<int> &output, int index){
        int n = candidates.size();
        
        if(index==n){
            return;
        }
        if(target<0){
            return;
        }
        if(target==0){
            ans.push_back(output);
            return;
        }
        
        // for(int i=index; i<n;i++){
        //     // if(candidates[i]>target){
        //     //     return;
        //     // }
            solve(candidates,target,ans,output,index+1);
                output.push_back(candidates[index]);
                solve(candidates, target-candidates[index],ans,output, index);
                output.pop_back();
            
        // }



        
    }
};


