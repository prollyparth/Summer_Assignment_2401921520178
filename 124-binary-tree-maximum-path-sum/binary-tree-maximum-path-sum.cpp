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
    int ans = INT_MIN;

    int sol(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left = sol(root->left);
        int right = sol(root->right);

        int all_good = left + right + root->val;
        int one_good = root->val + max(left , right);
        int no_one_good = root->val;
        ans = max({ans , all_good , one_good , no_one_good});
        return max(one_good , no_one_good);
    }

    int maxPathSum(TreeNode* root) {
        sol(root);
        return ans;
    }
};