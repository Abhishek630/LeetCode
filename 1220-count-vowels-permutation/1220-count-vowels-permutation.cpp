#define ll long long
#define mod 1000000007
class Solution {
public:
    int countVowelPermutation(int n) {
        if(n==1) return 5;
        unordered_map<char,ll> m1;
        unordered_map<char,ll> m2;
        // we will in map 1 that the number of occurences of a vowel
        m1['a']=1; m1['e']=1; m1['i']=1; m1['o']=1; m1['u']=1;
        
        for(int i=1;i<n;i++){
            for(auto c: m1){  // we will interate map 1 and we will add the number of appearances
                if(c.first=='a'){ // of a letter to the letter followed by it in map2
                    m2['e'] += (c.second%mod);
                }else if(c.first=='e'){
                    m2['a'] += (c.second%mod);
                    m2['i'] += (c.second%mod);
                }else if(c.first=='i'){
                    m2['a'] += (c.second%mod);
                    m2['e'] += (c.second%mod);
                    m2['o'] += (c.second%mod);
                    m2['u'] += (c.second%mod);
                }else if(c.first=='o'){
                    m2['i'] += (c.second%mod);
                    m2['u'] += (c.second%mod);
                }else if(c.first=='u'){
                    m2['a'] += (c.second%mod);
                }
            }
            // then we will equate map1 with map2 for next iteration and clear map2 for next iteration
            m1 = m2;
            m2.clear();
        }
        ll ans=0;
		// in the final step we will add the number of occurences of a vowel at the last index
        for(auto c: m1){
            ans += (c.second%mod);
            ans%=mod;
        }
        
        return ans;
    }
};