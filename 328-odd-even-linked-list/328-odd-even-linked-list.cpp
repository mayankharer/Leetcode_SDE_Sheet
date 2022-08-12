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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        // handled corner cases  : 
        
        ListNode* odd = head;//given the first node is odd
        ListNode* even = head->next;//second node is even 
        ListNode* even_start = head->next;
        
        while(odd->next && even->next){//the loop stops if anyone of them points NULL
            odd->next = even->next;//connect all odds
            even->next = odd->next->next; //connect all evens
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_start;// place the first even node after last odd node
        return head;
        
    }
};