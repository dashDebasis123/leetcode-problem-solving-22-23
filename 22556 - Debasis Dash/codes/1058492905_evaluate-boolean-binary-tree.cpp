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
    bool evaluateTree(TreeNode* root) {
        TreeNode *temp = root;
        if(root == NULL)
            return false;
        if(root->val == 0) return false;
        else if(root->val == 1) return true;
        else if(root->val == 2) return (evaluateTree(root->left) or evaluateTree(root->right));
        else return (evaluateTree(root->left) and evaluateTree(root->right));

        
    }
};