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

TreeNode * Root = new TreeNode(0);
TreeNode * z = Root;
    
    
void inorder(TreeNode* r){
    if(!r) return;
    inorder(r->left);
    auto t = new TreeNode(r->val);
    z->right = t ; 
    z = z->right;
    inorder(r->right);
} 
public:
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return Root->right;    
    }
};