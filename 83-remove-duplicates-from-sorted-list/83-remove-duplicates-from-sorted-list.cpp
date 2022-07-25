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
        ListNode* pointer = head;// create a pointer to iterate
        while(pointer != NULL && pointer->next != NULL) //self explainatory
        {
            if(pointer->val == pointer->next->val) // checking for consecutive elements
            {
                pointer->next = pointer->next->next; // point current pointer to next of next pointer
                //if the val of current node is equals to the val of next node then skip the node
            }
            else
                pointer = pointer->next;
        }
        return head;
    }
};