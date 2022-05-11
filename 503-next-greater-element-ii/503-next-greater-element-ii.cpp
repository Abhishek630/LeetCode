// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         vector<int>v;
//         stack<int>st;
//         int n = nums.size();
        
//         for(int i=n-1;i>=0;i--){
//             st.push(nums[i]);
//         }
        
//         for(int i=n-1; i>=0; i--){
            
//             if(st.empty()){
//                 v.push_back(-1);
//             }
            
//             else if(!st.empty() && st.top()> nums[i]){
//                 v.push_back(st.top());
//             }
//             else{
          
//             while(!st.empty() && nums[i]>=st.top()){
//                 st.pop();
//             }
//             if(st.empty()){
//                 v.push_back(-1);
//             }
//             else{
//                 v.push_back(st.top());
//             }
//             }
//             st.push(nums[i]);
//         }
        
//         reverse(v.begin(), v.end());
//         return v;
//     }
// };

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> v;
        stack<int> s;
        
        for(int i=nums.size() - 1; i>=0; i--) s.push(nums[i]);
        
        for(int i=nums.size() - 1; i>=0; i--) {
            while(!s.empty() && nums[i] >= s.top()) s.pop();
                
            if(s.empty()) v.push_back(-1);
            else v.push_back(s.top());
            
            s.push(nums[i]);
        }
        
        reverse(v.begin(), v.end());
        
        return v;
    }
};