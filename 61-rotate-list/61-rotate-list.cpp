/**
To rotate a linked list by k, we can first make the linked list circular.
And, then moving k-1 steps forward from head node, making (k-1)th node’s next to null and make kth node as head.
Firstly checking if list is empty , we will return NULL.
Second, if list contain only node than rotation doesn't have any effect , return head.
Counting Number of Nodes.
Now consider an eg. Our List is
1 -> 3 -> 5 -> 5-> 8
so the count of nodes is 5; & value of k given is 7
this means we have to rotate list by 7 places.
so the list will become,
8->1->3->->5->5, at 1st iteration,
5->8->1->3->5, at 2nd iteration,
5->5->8->1->3, at 3rd iteration,
3->5->5->8->1, at 4th iteration,
1->3->5->5->8, at 5th iteration,
8->1->3->5->5, at 6th iteration,
5->8->1->3->5, at 7th iteration.
Therefore our list afte 7 rotaion is 5->8->1->3->5.
Now see at 7th and 2nd iteration the list is same, so why we need to rotate list when the outcome is same.
Therefore we are taking mod of count with k as k = k % cnt. this will give us the valid minimum rotation we have to perform.
Now we will traverse list k times.
we will first make list circular and then move the list 1 by 1 and last we will add NULL.
This process we will repeat k times as we have to rotate by k places.
At last, return head.
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       
        ListNode *temp = head, *ptr = head;
        
		// if  list is empty return NULL
        if(head == NULL)
            return NULL;
			
        // if  list contain 1 node return NULL
        if(head -> next == NULL)
            return head;
        
        int cnt = 1;
        
		// counting nodes in list
        while(temp->next != NULL)
        {
            temp = temp -> next;
            cnt++;
        }
		
		// mod of k with cnt to find the minimum no of rotations.
        k = k % cnt;
        
        while(k--)
        {
            while(temp->next != NULL)
                temp = temp -> next;
        
            temp -> next = head;           //making it a circular linked list
			
			// making last node the new head
            head = temp;
            ptr = temp;
			
			// moving list values one by one
            while(temp -> next != head)
            {
                temp = temp -> next;
            }
            
			// adding NULL at end of list
            temp -> next = NULL;
			
            temp = ptr;
            
        }
        return head;
    }
};