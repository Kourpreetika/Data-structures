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
    ListNode* reverseList(ListNode* head) {//This is the iterative three-pointer technique for reversing a singly linked list in place.
    //iterative method.
        if(head == NULL){
            return NULL;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        while( curr!= NULL){
            ListNode* next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
//https://leetcode.com/problems/reverse-linked-list/?envType=problem-list-v2&envId=linked-list