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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if(list1 == null){
            return list2;
        }
        if(list2 == null){
            return list1;
        }
        
        
//         ListNode curr1 = list1;
//         ListNode curr2 = list2;
//         while(curr1!=null && curr2!=null){
//             if(curr1.val>=curr2.val){
//             ListNode temp = curr1.next;
//             curr1.next = curr2;
//             curr1 = curr1.next;   
//            } 
//             else{
//                 ListNode temp = curr2.next;
//                 curr2.next = curr1;
//                 curr2 = curr2.next;
//             }
//         }
        
//         while(curr1!=null){
//              ListNode temp = curr1.next;
//             curr1 =  curr1.next;
//         }
       
//          while(curr2!=null){
//              ListNode temp = curr2.next;
//             curr2 =  curr2.next;
//         }
        
        if(list1.val < list2.val){
            list1.next = mergeTwoLists(list1.next, list2);
            return list1;
        }
        else{
            list2.next =mergeTwoLists(list1,list2.next);
           
        }
         return list2;
        
    }
}