// class Solution {
// public:
//     int longestValidParentheses(string s) {
//         int ans =0, ansLeft =0, ansRight=0;
//         int open =0;
//         int close =0;
//         int n = s.size();
        
//         for(int i=0;i<n;i++){
//             if(s[i]== ')'){
//                 close++;
//             }
//             if(s[i]=='('){
//                 open++;
//             }
//             if(close>open){
//                 close =open =0;
//             }
//             else if(open ==close){
//                 ansLeft = max(ans,open+close);
//             }
//         }
//         open =0;
//         close =0;
//         for(int i=n-1;i>=0; i--){
//             if(s[i]=='('){
//                 open++;
//             }
//             if(s[i]==')'){
//                 close++;
//             }
//             if(open>close){
//                 close =open =0;
//             }
//             else if(open ==close){
//                 ansRight =max(ans,open+close);
//             }
          
//         }
//         return max(ansLeft,ansRight);
//     }
// };


class Solution {
public:
    int longestValidParentheses(string s) {
        int left=0,right=0,ansLeft=0,ansRight=0;
        
        // for left traversal 
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                left++;
            if(s[i]==')')
                right++;
            if(right>left) // if count of closing brackets becomes greater than opening bracket
            {
                right=0;
                left=0;
            }
            else if(right==left)
              ansLeft=max(ansLeft,left+right);
        }
        left=0;
        right=0;
        // for right traversal
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(')
                left++;
            if(s[i]==')')
                right++;
            if(left>right) // if count of opening brackets becomes greater than closing bracket
            {   
                left=0;
                right=0;
                }
            else if(left==right)
              ansRight=max(ansRight,left+right);
        }
        return max(ansLeft,ansRight);
    }
};