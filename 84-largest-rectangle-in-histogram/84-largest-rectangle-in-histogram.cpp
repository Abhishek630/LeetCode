class Solution {
public:
    vector<int> nsl(vector<int>&heights, int n){
        vector <int> left;
        int pseudo =-1;
        stack<pair<int,int>>s;
        
        for(int i=0; i<n ;i++){
            if(s.empty()){
                left.push_back(pseudo);
            }
            else if(!s.empty() && s.top().first<heights[i]){
                left.push_back(s.top().second);
            }
            else{
                while(!s.empty() && s.top().first>= heights[i]){
                    s.pop();
                }
                if(s.empty()){
                    left.push_back(pseudo);
                }
                else{
                    left.push_back(s.top().second);
                }
            }
            s.push({heights[i],i});
        }
        return left;
    }
    
    vector<int> nsr(vector<int>&heights, int n){
        vector <int> right;
        int pseudo = n;
        stack<pair<int,int>>s2;
        
        for(int i=n-1; i>=0 ;i--){
            if(s2.empty()){
                right.push_back(pseudo);
            }
            else if(!s2.empty() && s2.top().first<heights[i]){
                right.push_back(s2.top().second);
            }
            else{
                while(!s2.empty() && s2.top().first >= heights[i]){
                    s2.pop();
                }
                if(s2.empty()){
                    right.push_back(pseudo);
                }
                else{
                    right.push_back(s2.top().second);
                }
            }
            s2.push({heights[i],i});
        }
        reverse(right.begin(), right.end());
        return right;
    }
    
    
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>result;
        int maxArea =INT_MIN;
        vector<int>left =nsl(heights,n);
        vector<int>right=nsr(heights, n);
        for(int i=0; i<n ;i++){
            result.push_back(right[i]-left[i]-1);
        }
        
        for(int i=0; i<n ;i++){
            maxArea = max(maxArea,result[i]*heights[i]);
        }
        return maxArea;
    }
};