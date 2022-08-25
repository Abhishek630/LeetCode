class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1 = ransomNote.length();
        int n2 = magazine.length();
        
        if(n1>n2){
            return false;
        }
        
        
        unordered_map<char,int> mp;
        for(auto i: magazine){
            mp[i]++;
        }
        
        for(int j=0;j<n1;j++){
            if(--mp[ransomNote[j]]<0)
                return false;
        }
        
        for(auto i :mp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        
        return true;
    }
};