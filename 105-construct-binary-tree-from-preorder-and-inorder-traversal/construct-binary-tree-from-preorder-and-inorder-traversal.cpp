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
    int idx = 0;

    TreeNode* ans(vector<int>& preorder , vector<int>& inorder , int low , int high){
        if(low > high){
            return NULL;
        }
        int rootVal = preorder[idx];
        idx++;
        TreeNode* root = new TreeNode(rootVal);
        int mid = low;
        while(inorder[mid] != rootVal){
            mid++;
        }
        root->left = ans(preorder , inorder , low , mid - 1);
        root->right = ans(preorder , inorder , mid + 1 , high);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 1){
            TreeNode* root=new TreeNode(preorder[0]);
        }
        return ans(preorder , inorder , 0 , preorder.size() - 1);
    }
};