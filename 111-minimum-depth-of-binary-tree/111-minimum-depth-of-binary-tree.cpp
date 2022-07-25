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
    int minDepth(TreeNode* r) {
        if(!r) return 0;
        int lt = minDepth(r->left); 
        int rt = minDepth(r->right); 
        return 1+(min(lt,rt)?min(lt,rt):max(lt,rt));        
        
    }
};