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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //optimised space complexity
        // when list1 is empty then 
        // our output will be same as list2
        if(l1 == NULL) return l2; 

        // when list2 is empty then our output 
        // will be same as list1
        if(l2 == NULL) return l1;

        // pointing l1 and l2 to smallest and greatest one
        if(l1->val > l2->val) std::swap(l1,l2);

        // act as head of resultant merged list
        ListNode* res = l1;

        while(l1 != NULL && l2 != NULL) {
 
            ListNode* temp = NULL;

            while(l1 != NULL && l1->val <= l2->val) {

                temp = l1;//storing last sorted node  
                l1 = l1->next;
            }

            // link previous sorted node with 
            // next larger node in list2
            temp->next = l2;
            std::swap(l1,l2);
        }
        return res;
        
        // // first  solution by using extra space i.e creating new LL 
        // ListNode *temp = new ListNode(); // create a dummy node or temperory node
        // ListNode *curr = temp;           // node for traversing the as per the smaller value LL
        // while(list1!=NULL && list2!=NULL){ // we travrse until any of the LL points to null
        //     if(list1->val <= list2->val ){
        //         curr->next = list1;
        //         list1 = list1->next;
        //     }
        //     else{
        //         curr->next = list2;
        //         list2 = list2->next;
        //     }
        //     curr = curr->next;
        // }
        // curr->next = list1 != NULL ? list1:list2;
        // the above line states that whenever any ll finishes or points to NULL we 
        // return temp->next;
        
        // w/o using extra space 
        
    }
};

