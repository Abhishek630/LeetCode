class Solution {
    public int hammingDistance(int x, int y) {
        
        int xor =x^y;
        int count =0;
        
//         while(xor!=0){
//             xor=xor&(xor-1);
//             count++;
//         }
//         return count;
        
        for(int i=0;i<32;i++){
            if(((xor>>i)&1) ==1){
                count++;
            }
        }
        return count;
    }
}