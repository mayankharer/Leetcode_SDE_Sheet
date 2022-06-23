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
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        ListNode* p = head;
        while(p!=NULL){
            ans.push_back(p->val);
            p = p->next;
        }
        bool flag = 1;
        int l = ans.size();
        for(int i= 0;i<l-1;i++){
            if(ans[i]!=ans[l-1-i])
                flag = 0; 
        }
    return flag;
    }
};