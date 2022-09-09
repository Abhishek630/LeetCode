class Solution {
public:
    bool static customSort(vector<int>&a, vector<int>&b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), customSort);
        int ans =0;
        int n = properties.size();
        int maxi = INT_MIN;
        
        for(int i=n-1;i>=0;i--){
            if(properties[i][1]< maxi){
                ans++;
            }
            if(properties[i][1]> maxi){
                maxi = properties[i][1];
            }
        }
        return ans;
    }
};