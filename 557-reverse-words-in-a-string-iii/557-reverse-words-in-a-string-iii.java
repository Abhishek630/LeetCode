class Solution {
    public String reverseWords(String s) {
        String [] ch = s.split(" ");
        String out ="";
        for(String x :ch){
            StringBuilder sb = new StringBuilder(x).reverse();
            out+=sb.toString()+" ";
        }
        return out.trim();
    }
}