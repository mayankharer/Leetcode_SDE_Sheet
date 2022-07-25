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
    vector<int>v;
    void DFS(TreeNode* r){
        if(!r) return;
        // if(r->left){
        //     if(mindif>abs(r->val-r->left->val))mindif=abs(r->val-r->left->val);
        // }
        // if(r->right){
        //     if(mindif>abs(r->val-r->right->val))mindif=abs(r->val-r->right->val);
        // }
        v.push_back(r->val);
        DFS(r->left);
        DFS(r->right);   
    }
    
    public:
    int minDiffInBST(TreeNode* root) {
    
        DFS(root);
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                mindif=min(mindif,abs(v[i]-v[j]));
            }
        }
        return mindif;
    }
};