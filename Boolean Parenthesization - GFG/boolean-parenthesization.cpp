// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int t[201][201][2];
    int solve(string &S, int i, int j , bool isTrue){
        if(i>j){
            return 0;
        }
        if(i==j){
            if(isTrue == true){
                if(S[i]=='T'){
                    return 1;
                }
                else{
                    return 0;
                }
            }
            else{
                if(S[i]=='F'){
                    return 1;
                }
                else{
                    return 0;
                }
            }
        }
        
        if(t[i][j][isTrue]!=-1){
             return t[i][j][isTrue]%1003;
        }
      
        
        int ans =0;
        for(int k=i+1; k<=j-1; k=k+2){
            int lf = solve(S,i,k-1,false);
            int lt = solve(S,i,k-1,true);
            int rf = solve(S,k+1,j,false);
            int rt = solve(S,k+1,j,true);
            
            if(S[k]=='&'){
                if(isTrue == true){
                    ans = ans+lt*rt;
                }
                else{
                    ans = ans+lt*rf+lf*rt+lf*rf;
                }
            }
            else if(S[k]=='|'){
                if(isTrue == true){
                    ans = ans+lt*rf+lf*rt+lt*rt;
                }
                else{
                    ans = ans+lf*rf;
                }
            }
            else if(S[k]=='^'){
                if(isTrue == true){
                    ans = ans+lt*rf+lf*rt;
                }
                else{
                    ans = ans+lf*rf+lt*rt;
                }
            }
        }
         t[i][j][isTrue]=ans;
        return ans%1003;
    }
    int countWays(int N, string S){
        // bool isTrue = true;
        memset(t,-1,sizeof(t));
        return solve(S,0,N-1,true);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends