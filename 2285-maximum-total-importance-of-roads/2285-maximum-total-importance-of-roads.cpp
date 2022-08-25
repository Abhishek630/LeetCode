class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>adj[n];
        vector<long long>deg(n);
        long long ans =0;
        for(int i=0;i<roads.size();i++){
            deg[roads[i][0]]++;
            deg[roads[i][1]]++;
        }
        //12234
        sort(deg.begin(), deg.end());
        for(int i=0; i<n;i++){
            ans += deg[i]*(i+1);
            // cout<<deg[i]<<" "<<i+1<<" "<<ans<<endl;
        }
        return ans;
    }
};