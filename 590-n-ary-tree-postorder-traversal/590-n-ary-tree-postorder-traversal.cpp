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
    void post(Node * r){
        if(!r) return;
        for(auto child:r->children){
            post(child);
        }
        ans.push_back(r->val);
    }
    
public:
    vector<int> postorder(Node* root) {
        if(!root) return {};
        post(root);
        return ans;
    }
};