/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return isSymTest(root->left,root->right);
    }
    bool isSymTest(TreeNode* p,TreeNode* q){
        //if both of them are NULL return false
        if(p==NULL && q==NULL) return true; //--> left and right node is NULL
        //if any one of them is not NULL return false
        else if(p==NULL || q==NULL) return false; // one of them is not NULL
        else if(p->val != q->val) return false;
        
        return isSymTest(p->left,q->right) && isSymTest(p->right,q->left); 
    }
};