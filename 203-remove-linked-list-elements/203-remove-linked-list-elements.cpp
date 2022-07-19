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
/*
Approach: 1
Solving the problem using two pointers: previous and current.
Time: 28 ms
*/
    ListNode* removeElements(ListNode* head, int val) {
        // -------------------RECURSIVE APPROACH-------------------
        if(!head) return head;
        
        if(head->val == val){
            head = removeElements(head->next,val); // calling it recursilely if the value is found
        }
        else{// if value not fond then traverse to next element
            head->next = removeElements(head->next,val);
        }
        return head;
        /*
        -------------------ITERATIVE APPROACH-------------------
        
        if(head==nullptr) return head;
        while(head!=nullptr && head->val==val){
            head = head->next;
        }
        ListNode* curr = head;//create a temporary pointer to head of LL
        ListNode* prev = nullptr; // create a temporary pointer to null
        // while(curr!=nullptr){ 
        while(curr){ // iterating the LL until NULL pointete
            if(curr->val==val){ // if the value at current node is the val to be deleted
                prev->next = curr->next;// removing the connection of the current nodes 
                curr = curr->next;// moving our current to next node
            }
            else{//if the value at that node is not the required value then 
                prev = curr;//set previous node as currrent 
                curr = curr->next;// and update the current node        
            }
        }
        return head;
        */
    }
};