/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* root) {
    if(root == NULL)
        return root;
    TreeNode *l = invertTree(root->left);
    TreeNode *r = invertTree(root->right);
    
    root->left = r;
    root->right = l;
    
    return root;
}

