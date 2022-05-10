class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int> output;
        solve(k, n, ans, output,1);
        return ans;
    }
    
    void solve(int k, int n ,vector<vector<int>>&ans, vector<int> &output, int num ){
//         if( n==0  && output.size()==k){
//             ans.push_back(output);
//             return;
//         }
        
//         for(int i=num; i<=9; i++){
//             output.push_back(i);
//             solve(k,n-i, ans,output,num+1);
//             output.erase(output.size()-1);
//         }
        
        if(n==0 && k==0){
            ans.push_back(output);
            return;
        }
        
        if(n==0 || k ==0){
            return;
        }
        
        if(num>9){
            return;
        }
        
        if(n>=num && k>0){
            output.push_back(num);
            solve(k-1,n-num,ans,output,num+1);
            output.pop_back();
        }
        
        solve(k,n,ans,output,num+1);
        
    }
    
};