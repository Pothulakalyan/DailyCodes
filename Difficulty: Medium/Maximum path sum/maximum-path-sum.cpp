/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    
   int findMaxPathSum(Node* root, int &res) {
        if (!root) return 0;
        
        int l = max(0, findMaxPathSum(root->left, res));
        int r = max(0, findMaxPathSum(root->right, res));
        
        res = max(res, l + r + root->data);
        return root->data + max(l, r);
    }

    int findMaxSum(Node *root) {
        int res = INT_MIN;
        findMaxPathSum(root, res);
        return res;
    }
};