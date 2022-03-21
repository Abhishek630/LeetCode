class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> h = new HashSet<>();
        int count =0;
        int j=0;
        for(int i=0;i<s.length();){
            if(h.contains(s.charAt(i))){
                h.remove(s.charAt(j));
                j++;
            }
            else{
                h.add(s.charAt(i));
                count = Math.max(count,h.size());
                i++;
            }
        }
        return count;
        
    }
}