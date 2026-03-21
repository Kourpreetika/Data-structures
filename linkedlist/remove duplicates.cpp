/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    // start iteration over head 
    //if head[i]=head[j]
    //return head[i]
    if( head == NULL){
    return NULL;
    }
     ListNode* curr = head;
    while( curr -> next != NULL){
    if(curr -> val == curr ->next ->val  ){
    curr -> next = curr -> next ->next;
    }else{
        curr = curr ->next;
    }
    }
    return head;
    }
};
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/?envType=problem-list-v2&envId=linked-list
