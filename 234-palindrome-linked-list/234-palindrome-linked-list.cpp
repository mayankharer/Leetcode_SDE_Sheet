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
    // ListNode* reverse(node* ptr) {
    //     ListNode* pre=NULL;
    //     ListNode* nex=NULL;
    //     while(ptr!=NULL) {
    //         nex = ptr->next;
    //         ptr->next = pre;
    //         pre=ptr;
    //         ptr=nex;
    //     }
    //     return pre;
    // }
    
    ListNode* reverse(ListNode*ptr){
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(ptr){
            next = ptr->next;
            ptr->next = prev;
            prev = ptr;  // increment the pointer
            ptr = next; // increment the pointer
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        //most optimal solution
        //1->iterate and find the middle of the linked list
        //2-> reverse the part after the linked list
        //3->create a dummy node and now check if dummy->data == rev->data upto rev points NULL
        
        if(head==NULL||head->next==NULL) return true;
        ListNode*slow = head;
        ListNode*fast = head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverse(slow->next);
        slow = slow->next;
        ListNode* dummy = head;
        
        while(slow!=NULL){
            if(dummy->val != slow->val) return false;
            dummy = dummy -> next;
            slow = slow->next;
        }
        return true;
        // ckecking using stack
//         ListNode * temp = head;
//         stack<int> st;
//         while(temp){
//             st.push(temp->val);
//             temp = temp->next;
//         }
        
//         while(head){
//             int i = st.top();
//             st.pop();
//             if(head->val!=i) return false;
            
//             head=head->next;
//         }
//         return true;
        
    
    //     vector<int> ans;
    //     ListNode* p = head;
    //     while(p!=NULL){
    //         ans.push_back(p->val);
    //         p = p->next;
    //     }
    //     bool flag = 1;
    //     int l = ans.size();
    //     for(int i= 0;i<l-1;i++){
    //         if(ans[i]!=ans[l-1-i])
    //             flag = 0; 
    //     }
    // return flag;
    }
};