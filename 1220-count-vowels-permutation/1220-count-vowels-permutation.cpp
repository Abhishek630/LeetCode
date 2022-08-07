#define ll long long
#define mod 1000000007
class Solution {
public:
    int countVowelPermutation(int n) {
        if(n==1){
            return 5;
        }
        unordered_map<char,ll>mp1;
        unordered_map<char,ll>mp2;
        mp1['a'] =1;
        mp1['e'] =1;
        mp1['i'] =1;
        mp1['o'] =1;
        mp1['u'] =1; 
    
    for(int i=1; i<n; i++){
        for(auto c:mp1){
            if(c.first =='a'){
                mp2['e'] += (c.second%mod);
            }
            if(c.first =='e'){
                mp2['a'] += (c.second%mod);
                mp2['i'] += (c.second%mod);
            }
            if(c.first =='i'){
                mp2['a'] += (c.second%mod);
                mp2['e'] += (c.second%mod);
                mp2['o'] += (c.second%mod);
                mp2['u'] += (c.second%mod);
            }
            if(c.first =='o'){
                mp2['i'] += (c.second%mod);
                mp2['u'] += (c.second%mod);
            }
            if(c.first =='u'){
                mp2['a'] += (c.second%mod);
            }
        }
        
        mp1=mp2;
        mp2.clear();
    }
        long long ans =0;
        
        for(auto c : mp1){
            ans = ans+(c.second%mod);
            ans%=mod;
        }
        return ans;
    }
};