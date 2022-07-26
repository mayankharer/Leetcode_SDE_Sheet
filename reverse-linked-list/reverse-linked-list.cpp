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
    ListNode* reverseList(ListNode* head) {
        ListNode* newhead = NULL;
        while(head!=NULL){
            ListNode* next = head->next; //incrementing the next each time
            head->next = newhead; // pointing the pointer to prev that is newHead
            newhead = head; // as the newhead is pointing to NULL assign head as newHead
            head = next; // incrementing the head to next
        }
        return newhead;
    }    
// public:
//     void reverse(ListNode* &head){
//         ListNode* prevptr = NULL;
//         ListNode* currentptr = head;
//         // ListNode* nextptr = NULL;
//         ListNode* nextptr;
        
//         while(currentptr!=NULL){
//             nextptr = currentptr->next;  
//             currentptr->next = prevptr;
//             //now incrementing the pointers
//             prevptr = currentptr;
//             currentptr = nextptr;
//         }
//         head = prevptr;
//     return head;
//     }
    
// public:
//     ListNode* reverseList(ListNode* head) {
//         reverse(head);
//         return head;
//         return 0;
//     }
};