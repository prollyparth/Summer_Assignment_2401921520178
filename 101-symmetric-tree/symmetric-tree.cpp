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
    bool sol(TreeNode* leftNode , TreeNode* rightNode){
        if(leftNode == NULL && rightNode == NULL){
            return true;
        }
        else if(leftNode == NULL || rightNode == NULL){
            return false;
        }
        if(leftNode->val != rightNode->val){
            return false;
        }
        return sol(leftNode->left , rightNode->right) && sol(leftNode->right , rightNode->left);
    }

    bool isSymmetric(TreeNode* root) {
        return sol(root->left , root->right);
    }
};