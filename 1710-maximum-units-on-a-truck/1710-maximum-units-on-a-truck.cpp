class Solution {
public:
    static int compare(const vector<int> &a,const vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int count =0;
        
        for(int i=0;i<n;i++){
            if(boxTypes[i][0]>=truckSize){
                count = count+truckSize*boxTypes[i][1];
                truckSize =0;
            }
            else{
                truckSize -= boxTypes[i][0];
                count += boxTypes[i][0]*boxTypes[i][1];
            }
        }
        return count;
    }
};