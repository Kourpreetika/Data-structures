/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
   unordered_set<ListNode*> seen;
   while(headA != NULL){
    seen.insert(headA);
    headA = headA -> next;
   }
   while(headB !=NULL){
    if(seen.find(headB) != seen.end()){//is AN ITERATOR 
        return headB;
    }
    headB =headB -> next;
   }
   return NULL;
    }
};
//https://leetcode.com/problems/intersection-of-two-linked-lists/?envType=problem-list-v2&envId=linked-list