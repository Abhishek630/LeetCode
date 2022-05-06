// class Solution {
//     public String removeDuplicates(String s, int k) {
//         Stack<Pair<Character, Integer>>st = new Stack<>();
        
//         for(char c : s.toCharArray()){
//             if(st.isEmpty() || st.peek().getValue() !=c){
//                 st.push(new Pair<>(c,1));
//             }
//             else{
//                 Pair<Character, Integer> head = st.pop();
//                 st.push(new Pair<>(head.getKey(), head.getValue()+1));
//                 if(st.peek().getValue() == k){
//                     st.pop();
//                 }
//             }
//         }
        
//         String ans ="";
//         while(!st.isEmpty()){
//             Pair<Character, Integer> head = st.pop();
//             int freq = head.getValue();
//             while(freq>0){
//                 ans = head.getKey()+ ans;
//             }
//         }
//         return ans;
//     }
// }
class Item {
  char c;
  int freq;

  public Item(char c, int freq) {
    this.c = c;
    this.freq = freq;
  }
}

class Solution {
  public String removeDuplicates(String s, int k) {
    StringBuilder sb = new StringBuilder();
    LinkedList<Item> stack = new LinkedList<>();

    for (final char c : s.toCharArray()) {
      if (!stack.isEmpty() && stack.peek().c == c)
        ++stack.peek().freq;
      else
        stack.push(new Item(c, 1));
      if (stack.peek().freq == k)
        stack.pop();
    }

    while (!stack.isEmpty()) {
      Item item = stack.pop();
      for (int i = 0; i < item.freq; ++i)
        sb.append(item.c);
    }

    return sb.reverse().toString();
  }
}
