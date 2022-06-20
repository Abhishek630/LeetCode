class Solution {
public:
    // int t[101][10001];
    int superEggDrop(int k, int n) {
        vector<vector<int>> t(k+1, vector<int>(n+1, -1));
        return solve(k,n,t);
    }
    
    int solve(int k, int n,vector<vector<int>> &t){
        if(n==0 || n==1){
            return n;
        }
        if(k ==1){
            return n;
        }
        
        if(t[k][n]!=-1){
            return t[k][n];
        }
        int mini = INT_MAX;
        // for(int i=1;i<=n;i++){
        //     int tempAns= 1+max(solve(k-1,i-1,t),solve(k,n-i,t));
        //         mini = min(tempAns,mini);
        // }
        // return t[k][n]= mini;
        int low =0;
        int high = n;
        int temp =0;
        while(low<=high){
            int mid = (low+high)/2;
            int left = solve(k-1,mid-1,t);
            int right = solve(k,n-mid,t);
            temp =1 +max(left,right);
            if(left<right){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
             mini = min(temp,mini);
        }
        return t[k][n]= mini;
    }
};