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
//* 
/*(pointer): Stores the memory address of another variable. ListNode* tail means tail is a pointer to a ListNode.


& (address of): Gets the memory address of a variable. &temp means the address of temp.


ListNode temp(0); Creates a dummy node with value 0 and next = nullptr. It's a placeholder to make building the list easier.


ListNode* tail = &temp; Creates a pointer called tail that initially points to temp.


-> (access through pointer): tail->next accesses the next field of the node that tail points to.

tail = tail->next; Moves the pointer forward to the next node.

return temp.next; Returns the first real node, skipping the dummy node.*/


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode temp(0);
        ListNode* tail = &temp;
        while(list1 != nullptr && list2 !=nullptr){ //if both still have nodes
        //if list 1s value is less than list 2 then tail next = list1 and list1 will move to the next one
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
            }
            //same as above but for list 2.
            else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        //this will attatch the rest of the list thats leftover once while loop is over.
        tail->next = (list1 != nullptr) ? list1 : list2;

        return temp.next;
    }
};
