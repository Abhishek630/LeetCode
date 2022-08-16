class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        
        int n = s.size();
        
        for(auto x :s){
            mp[x]++;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
           
         
//         for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
//         cout << '\t' << itr->first << '\t' << itr->second
//              << '\n';
//     }

    }
};