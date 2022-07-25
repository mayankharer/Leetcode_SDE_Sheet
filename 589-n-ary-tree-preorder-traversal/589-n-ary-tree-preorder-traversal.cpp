/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int> ans;
    void pre(Node * r){
        if(!r) return;
        ans.push_back(r->val);
        for(auto child:r->children){
            pre(child);
        }
    }
public:
    vector<int> preorder(Node* root) {
        if(!root) return {};
        pre(root);
        return ans;
    }
};