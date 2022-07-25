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
    vector<int>ans;
    void post(TreeNode* r){
        
        if(!r) return;
        post(r->left);
        post(r->right);
        ans.push_back(r->val);
    }
    
    public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return{};
        post(root);
        return ans;
        
    }
};