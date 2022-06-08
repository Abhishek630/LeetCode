class Solution {
private:
    bool isPali(string &s, int i, int j) {
        while(i <= j) {
            if(s[i] != s[j])
                return false;
            
            i++;j--;
        }
        
        return true;
    }
    
    void solve(vector<vector<string>> &ans, string s, vector<string> &path, int ind) {
        if(ind == s.length()) {
            ans.push_back(path);
            return;
        }
        
        for(int i = ind; i < s.length(); i++) {
            if(isPali(s, ind, i)) {
                path.push_back(s.substr(ind, i - ind + 1));
                solve(ans, s, path, i + 1);
                path.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        
        solve(ans, s, path, 0);
        
        return ans;
    }
};
// class Solution {
// public:
//     vector<vector<string>> partition(string s) {
//         vector<vector<string>>ans;
//         vector<string>output;
//         solve(s,ans,output,0);
//         return ans;
        
//     }
    
//     void solve(string s, vector<vector<string>>&ans, vector<string>&output, int index){
        
//         if(index ==s.length()){
//             ans.push_back(output);
//             return;
//         }
        
//         for(int i=index; i<s.length(); i++){
//             if(isPal(s, index, i)){
//                 output.push_back(s.substr(index, i-index+1));
//                 solve(s,ans,output, index+1);
//                 output.pop_back();
//             }
//         }
//     }
    
//     bool isPal(string &s, int i, int j){
//         while(i<=j){
//             if(s[i]!=s[j]){
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;
//     }
// };