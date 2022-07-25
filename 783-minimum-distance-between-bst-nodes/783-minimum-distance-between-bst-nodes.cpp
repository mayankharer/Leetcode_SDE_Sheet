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
    int mindif = INT_MAX;
    int prev = -1;
    vector<int>v;
    void inorder(TreeNode* r){
        
        if(!r) return;
        // if(r->left){
        //     if(mindif>abs(r->val-r->left->val))mindif=abs(r->val-r->left->val);
        // }
        // if(r->right){
        //     if(mindif>abs(r->val-r->right->val))mindif=abs(r->val-r->right->val);
        // }
        inorder(r->left);
        if(prev>=0)
        mindif = min(mindif,r->val-prev);
        prev = r->val;
        inorder(r->right);   
    }
    
    public:
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return mindif;
        
    }
};