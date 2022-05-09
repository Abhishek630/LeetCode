// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>ans;
//         stack<int>s;
//         int n = nums2.size();
//         unordered_map<int,int>map;
        
//         for(int i= n-1; i>=0; i--){
//             if(s.size()==0){
//                 map[nums2[i]]=-1;
//             }
            
//             else if(s.size()>0 && s.top()>nums2[i]){
//                 map[nums2[i]]=s.top();
//             }
//             else{
//                 while(s.size()>0 && s.top()<=nums2[i]){
//                      s.pop();
//                 }
//                 if(s.size()>0){
//                     map[nums2[i]]=-1;
//                 }
//                 else{
//                     map[nums2[i]]=s.top();
//                 }
//             }
//             s.push(nums2[i]);
//         }
        
//         for(auto elem : nums1)
//           {
//              ans.push_back(map[elem]);
//           }
//          return ans ; 
        
//     }
// };
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mp;
        
        stack<int>st;
        
         for(int i=nums2.size()-1 ;i>=0;i--)
         {
              if(st.size()==0)
              {
                 mp[nums2[i]]=-1;
              }
             else if( st.top()>nums2[i] )
                 {
                  mp[nums2[i]]=st.top();
                   
                 }
             else {
                     
                     while( st.size()>0  && st.top()<=nums2[i])
                     {
                         st.pop();
                         
                     }
                 
                     if( st.size()==0)
                     {
                          mp[nums2[i]]=-1;
                           
                     }
                     else{
                           mp[nums2[i]]=st.top();
                         
                     }
                     
                 }
               st.push(nums2[i]);
         }
        vector<int>ans;
          for(auto elem : nums1)
          {
             ans.push_back(mp[elem]);
          }
         return ans ; 
                 
    }
};