// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    
//     bool isValid(int i, int j, int N,vector<vector<bool>>&vis){
//         if(i>=0 &&i<N &&j>=0 && j<N && vis[i][j]== false){
//             return true;
//         }
//         return false;
//     }
//     //Function to find out minimum steps Knight needs to reach target position.
// 	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
// 	{
// 	    int tx = TargetPos[0]-1;
// 	    int ty = TargetPos[1]-1;
	    
// 	    int sx = TargetPos[0]-1;
// 	    int sy = KnightPos[1]-1;
	    
// 	    if(tx==sx && ty==sy){
// 	        return 0;
// 	    }
	    
// 	    vector<vector<bool>>vis(N,vector<bool>(N,false));
// 	    vis[sx][sy]=true;
// 	    queue<pair<int,int>>q;
// 	    q.push({sx,sy});
// 	    int ans =0;
	    
// 	    while(!q.empty()){
// 	        int size = q.size();
// 	        ans++;
// 	        while(size>0){
// 	            pair<int,int>p =q.front();
// 	            q.pop();
	            
// 	            int xx = p.first;
// 	            int yy = p.second;
	            
// 	            int ax[8]={-1,1,-2,2,-2,-1,2,1};
// 	            int ay[8]={2,2,1,1,-1,-2,-1,-2};
// 	           //int ax[8] = {1, 1, -1, -1, 2, -2, 2, -2};
// 	           // int ay[8] = {2, -2, 2, -2, 1, 1, -1, -1};
	            
// 	            for(int i=0; i<8;i++){
// 	                int nx= ax[i]+xx;
// 	                int ny =ay[i]+yy;
	                
// 	                if(nx==tx && ny==ty){
// 	                    return ans;
// 	                }
	                
// 	                if(isValid(nx,ny,N,vis)){
// 	                    vis[nx][ny]= true;
// 	                    q.push({nx,ny});
// 	                }
// 	            }
// 	            size--;
// 	        }
// 	    }
// 	    return ans;
bool isValid(int i, int j, int n, vector<vector<bool>>&visited){
        if(i>=0 && i<n && j>=0 && j<n && visited[i][j] == false){
            return true;
        }
        return false;
    }
    
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int n = N;
	    int tx = TargetPos[0]-1, ty = TargetPos[1]-1;
	    int x1 = KnightPos[0]-1, y1 = KnightPos[1]-1;
	    
	    if(x1 == tx && y1 == ty) return 0;
	    
	    vector<vector<bool>>visited(n, vector<bool>(n, false));
	    
	    queue<pair<int, int>>q;
	    q.push({x1, y1});
	    visited[x1][y1] = true;
	    
	    int ans = 0;
	    while(!q.empty()){
	        
	        int size = q.size();
	        ans++;
	        while(size > 0){
	            pair<int,int>p = q.front();
	            q.pop();
	            
	            int xx = p.first;
	            int yy = p.second;
	            
	            int ax[8] = {1, 1, -1, -1, 2, -2, 2, -2};
	            int ay[8] = {2, -2, 2, -2, 1, 1, -1, -1};
	            
	            for(int i=0; i<8; i++){
	                int nx = xx + ax[i];
	                int ny = yy + ay[i];
	                
	                if(nx == tx && ny == ty) return ans;
	                
	                if(isValid(nx, ny, n, visited)){
	                    visited[nx][ny] = true;
	                    q.push({nx, ny});
	                }
	            }
	           
	            size--;
	        }
	    }
	    
	    
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends