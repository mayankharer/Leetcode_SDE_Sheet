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
// void bfs(TreeNode* r){
//     queue<TreeNode*> q;
//     q.push(r);
//     while(!q.empty()){
//         auto a = q.front();
//         cout << a->val<<" ";
//         q.pop();
//         if(a->left) q.push(a->left);
//         if(a->right) q.push(a->right);
//     }
// }
    
    public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};