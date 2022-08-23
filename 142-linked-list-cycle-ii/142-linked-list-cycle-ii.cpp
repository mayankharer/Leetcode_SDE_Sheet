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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                isCycle = true;
                break;
            }
        }
        
        if(!isCycle) return NULL;
        
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
        
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        
        
        
        
//        if(head==NULL)return NULL;
//         ListNode* slow = head;
//         ListNode* fast = head;
//         bool isCycle = false;
//         while(fast->next!=NULL && fast->next->next!=NULL){
//             fast = fast->next->next;
//             slow = slow->next;
//             if(fast == slow) {
//                 isCycle = true;
//                 break;
//             }
//         }
//         // if there is no cycle in the LL return NULL
//         if(!isCycle) return NULL;
//         // after this loop we find the point at which bith the pointers meet
//         // now keep the fast pointer thereitself and move slow pointer to head
//         // now traverse slow and fast by one step each and point
//         // the point at which they meet each other is starting point of LOOP
        
        
//         slow = head;
//         while(slow!=fast){
// 	    	slow = slow -> next;
// 		    fast = fast -> next;
//     	}

// 	    return fast;
    }
};