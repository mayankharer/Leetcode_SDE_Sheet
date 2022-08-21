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
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        unordered_map<ListNode*,int> mp;
        while(head!=NULL){
            if(mp.count(head)>0)
                return true;
            else
                mp[head] = 1;
            head = head->next;
        }
        return false;
    }
};
//--------------------------------------------------------------------
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head == NULL) return false;
//         ListNode* fast = head;
//         ListNode* slow = head;
        
//         while(fast->next != NULL && fast->next->next != NULL) {
//             fast = fast->next->next; // traverse fast by two nodes 
//             slow = slow->next;// traverse slow by one node at a time
//             if(fast == slow) return true; 
//         }
//         return false;
//     }
// };