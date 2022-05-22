class Solution {
    public int countSubstrings(String s) {
        int count = 0;
        
        for(int i=0; i< s.length(); i++){
            count += countPalindrome(i,i,s);
            count += countPalindrome(i,i+1,s);
        }
        return count;
    }
    
    private int countPalindrome(int start, int end, String s){
        int tcount =0;
        while(start >=0 && end<s.length() && s.charAt(start)== s.charAt(end)){
            start--;
            end++;
            tcount++;
        }
        return tcount;
    }
}