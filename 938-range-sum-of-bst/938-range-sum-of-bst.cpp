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
    // void pre(TreeNode* R){
    //     if(!R)return ;
    //     cout<<R->val<<" " ;
    //     pre(R->left);
    //     pre(R->right);
    // }
    // void in(TreeNode* R){
    //     if(!R)return ;
    //     in(R->left);
    //     cout<<R->val<<" " ;
    //     in(R->right);
    // }
    int s = 0;
    void post(TreeNode* R,int l,int h){
        if(!R)return ;
        post(R->left,l,h);
        post(R->right,l,h);
        if(R->val>=l && R->val <= h) s+=R->val;
        cout<<R->val<<" " ;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        post(root,low,high);
        return s;    
    }
};