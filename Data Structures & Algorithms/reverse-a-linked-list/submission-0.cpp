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
//first thought: just turn head to the last one, and tail pointer to the first one and reverse the arrows essentially. 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr !=nullptr){
        //save next node before reversing connection
        ListNode* next = curr->next;
        //reverse arrow to point to prev now that next is saved.
        curr->next = prev;
        //move pointers forward
        prev = curr; 
        curr = next;
    }
    return prev;
    }
};
