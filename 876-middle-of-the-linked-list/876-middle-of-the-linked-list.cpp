/*
Intuition: In the Tortoise-Hare approach, we increment slow ptr by 1 and fast ptr by 2, so if take a close look fast ptr will travel double than that of the slow pointer. So when the fast ptr will be at the end of Linked List, slow ptr would have covered half of Linked List till then. So slow ptr will be pointing towards the middle of Linked List.

Approach: 

Create two pointers slow and fast and initialize them to a head pointer.
Move slow ptr by one step and simultaneously fast ptr by two steps until fast ptr is NULL or next of fast ptr is NULL.
When the above condition is met, we can see that the slow ptr is pointing towards the middle of Linked List and hence we can return the slow pointer.
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            // if(fast )
            
        }
        return slow;
        
        
        
        
        
        
        
        
        
        
        
        
        
        // ListNode *slow = head, *fast = head;
        // while (fast && fast->next)
        //     slow = slow->next, fast = fast->next->next;
        // return slow;
    }
};