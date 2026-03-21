class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //comapre the first noce of liat 1 with the first node of list 2
    //if node 1 of first list is less than the no0de    1 of list 2 
    //return first node of list 1;
    //comapre the  first node of list 2 with the second  node of list 1
    //return the smaller node or the.
    //so on.

//     1.) creswate a dummy node and also store a copy (this will be your head of the merged list)
// 2.) then iterate till list1 is not null and list2 is not null
// 3.) check if list1 node value is less than list2 node value and point dummy node -> next to the lesser node and do lesser node = lesser node -> next
// 4. ) at the end return the copy of the dummy node (which is the head of your merged list)
     ListNode* dummy = new ListNode(-1); 
     ListNode* tail = dummy;
     while(list1 != NULL && list2 != NULL){
        if(list1 -> val < list2 -> val){
          tail -> next = list1;
          list1 = list1 ->next;
        }else{
            tail->next  = list2 ;
            list2 = list2 -> next;
        }
        tail = tail -> next;
     }
     tail -> next = (list1 != NULL)? list1:list2;
    return dummy ->next;
    }
};
//https://leetcode.com/problems/merge-two-sorted-lists/?envType=problem-list-v2&envId=linked-list