/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void sol(TreeNode* root , string& ans){
        if(root == NULL){
            ans += "N ";
            return;
        }
        ans += to_string(root->val) + " ";
        sol(root->left , ans);
        sol(root->right , ans);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans = "";
        sol(root , ans);
        return ans;
    }

    TreeNode* decode(string& data , int& i){
        if(data[i] == 'N'){
            i += 2;
            return NULL;
        }
        string temp = "";
        while(data[i] != ' '){
            temp += data[i];
            i++;
        }
        i++;
        TreeNode* node = new TreeNode(stoi(temp));
        node->left = decode(data , i);
        node->right = decode(data , i);
        return node;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int i = 0;
        return decode(data , i);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));