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
    int getDecimalValue(ListNode* head) {
        vector<int> store;
        ListNode * ptr = head;
        while(ptr!=NULL){
            store.push_back(ptr->val);
            ptr = ptr->next;
        }
        int sum = 0;
        reverse(store.begin(),store.end());
        for(int i=0;i<store.size();i++){
            sum += store[i]*pow(2,i);
        }
        
        return sum;
    }
};