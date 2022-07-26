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
    void deleteNode(ListNode* node) {
        // we are not given any head node so what we do is copy the value of next node in our node and point the next of our node to next of next element that means we are basically deleting the next node of given node to be deleted
        //-----> NOTE--> this wont work if element to be deleted is at last  
        node->val = node->next->val;
        node->next = node->next->next;
    }
};