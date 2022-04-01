class Solution {
    public void reverseString(char[] s) {
        int n = s.length;
        int l =0;
        int e =n-1;
        reverse(s,n,l,e);
        // while(l<=e){
        //     char temp = s[l];
        //     s[l]= s[e];
        //     s[e] = temp;
        //     l++;
        //     e--;
        }
        
     public void  reverse(char[] s, int n , int st, int e){
              n = s.length;
            if(n==0){
                return;
            }
            if(st<=e){
                 char temp = s[st];
                 s[st]= s[e];
                 s[e] = temp;
                 reverse(s,n,st+1,e-1);
            }
        }
        
}