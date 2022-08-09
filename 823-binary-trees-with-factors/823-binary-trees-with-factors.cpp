#define mod 1000000007
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<long, long>m;
        
        for(int i=0; i<n;i++){
            m[arr[i]]=1;;
        }
        
        for(int i=0;i<n;i++){
            for(auto itr=m.begin(); itr!=m.end(); itr++){
                // if(arr[i]%(itr->first)==0){}
                if((arr[i]%(itr->first)==0) && m.find(arr[i]/(itr->first))!= m.end()){
                     m[arr[i]] =  (m[arr[i]]+m[itr->first] * m[arr[i] / (itr->first)])%mod;
                }
            }
        }
        
        
        int count =0;
        
        for(auto itr = m.begin(); itr!=m.end(); itr++){
            // cout<<itr->first << " "<< itr->second<<endl;
            count = (count+(itr->second))%mod;
        }
        return count%mod;
    }
};