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
    vector<int> ans;
    void postorder(TreeNode* r){
        if(!r) return;
        postorder(r->left);        
        postorder(r->right);
        ans.push_back(r->val);        
    }
    public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};
        postorder(root);
        return ans;
    }
};