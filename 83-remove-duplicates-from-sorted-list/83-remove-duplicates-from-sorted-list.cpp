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
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode* temp = head;// create a pointer to iterate
        while(temp != NULL && temp->next != NULL) //self explainatory
        {
            if(temp->val == temp->next->val) // checking for consecutive elements
            {
                temp->next = temp->next->next; // point current pointer to next of next pointer
                //if the val of current node is equals to the val of next node then skip the node
            }
            else
                temp = temp->next;
        }
        return head;
    }
};