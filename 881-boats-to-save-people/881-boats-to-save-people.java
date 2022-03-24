class Solution {
    public int numRescueBoats(int[] people, int limit) {
        
        Arrays.sort(people);
        int n = people.length;
        int count =0;
        int l =0;
        int h = n-1;
        
        while(l<=h){
            if(people[l]+people[h] <= limit){
                count++;
                l++;
                h--;
            }
             else{
                 count++;
                 h--;
             }
        }
        return count;
    }
}