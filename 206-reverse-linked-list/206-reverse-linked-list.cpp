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
//         ListNode *curr_ptr = head;
//         ListNode* prev_ptr = NULL;
//         ListNode* next_ptr;
//         while(curr_ptr!=NULL){
//             next_ptr = curr_ptr->next;
//             curr_ptr->next = prev_ptr;
//             prev_ptr = curr_ptr;
//             curr_ptr = next_ptr;
//         }
//         head = prev_ptr;
//         return head;
        // reversing a ll using a stack
        stack<int> st;
        ListNode* temp = head;
        while(temp!=NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp!=NULL){
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
        
        return head;
        
        
        
    }
};