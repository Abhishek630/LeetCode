/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || head.next == null || k==0){
            return head;
        }
        
        ListNode curr = head;
        int count =1;
        while(curr.next!=null){
            count++;
            curr = curr.next;
        }  
        curr.next = head;
        k = count-(k%count);
        
        ListNode prev = head;
        for(int i=1;i<k;i++){
            prev = prev.next;
        }
        curr.next = head;
        head = prev.next;
        prev.next = null;
        return head;
        
    }
}