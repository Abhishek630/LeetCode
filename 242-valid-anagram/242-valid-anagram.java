class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character, Integer> map = new HashMap<>(); 
        char[] sArray = s.toCharArray();
 
        // checking each char of strArray
        for (char c : sArray) {
            if (map.containsKey(c)) {
 
                // If char is present in charCountMap,
                // incrementing it's count by 1
                map.put(c, map.get(c) + 1);
            }
            else {
                // If char is not present in charCountMap,
                // putting this char to charCountMap with 1 as it's value
                map.put(c, 1);
            }   
        }
        
        char[] tArray =t.toCharArray();
        
        for(char d : tArray){
            if(map.containsKey(d)){
                map.put(d,map.get(d)-1);
            }
            else{
                return false;
            }
        }
        
        for(char c : map.keySet()){
        int val = map.get(c);
        if(val>0){
            return false;
        }
    }
        return true;
    }
}