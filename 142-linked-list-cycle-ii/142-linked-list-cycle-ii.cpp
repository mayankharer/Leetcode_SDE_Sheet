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
        if(head==NULL)return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) {
                isCycle = true;
                break;
            }
        }
        
        if(!isCycle) return NULL;
        
        slow = head;
        while(slow!=fast){
	    	slow = slow -> next;
		    fast = fast -> next;
    	}

	    return fast;
    }
};