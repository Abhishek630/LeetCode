class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        int close =n;
        int open =n;
        string output ="";
        solve(open, close, output,ans);
        return ans;
    }
    
    
    void solve(int open, int close, string output, vector<string> &ans){
        
        if(open ==0 && close ==0){
            ans.push_back(output);
            return;
        }
        
        if(open>0){
            // string output1 = output;
            // output1.push_back('(');
            solve(open-1, close, output+'(', ans);
    
        }
        
        if(close>open){
            // string output2 = output;
            // output2.push_back(')');
            solve(open,close-1,output+')',ans);
        }
    }
};