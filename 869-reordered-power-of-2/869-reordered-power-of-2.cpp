class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> v;
        while(n){
            v.push_back(n%10);
            n=n/10;
        }
        sort(v.begin(), v.end());
        for(int i=0;i<=30;i++){
            if(mapofDigits(pow(2,i),v)){
                return true;
            }
        }
        return false;
    }
    
    bool mapofDigits(int n ,vector<int> nums){
        vector<int> v;
        while(n){
            v.push_back(n%10);
            n=n/10;
        }
        sort(v.begin(), v.end());
        return v== nums;
    }
};