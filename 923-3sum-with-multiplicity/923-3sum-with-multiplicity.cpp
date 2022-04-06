class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int count = 0, n = arr.size(), modu = 1e9+7;
        //store sum and their frequency
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++)
        {
            //if (target-arr[i]) found in map we add its frequency into the count
            count = (count + (mp[target-arr[i]])) % modu;
            
            //iterate from 0 to i-1 and store the frequency of sum
            for(int j=0; j<i; j++)
            {
                mp[arr[i] + arr[j]]++;
            }
        }
        return count;

        
    }
};