/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int height(TreeNode *root){
    if(root==NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);

    return 1+max(l,r);
}
int Solution::isBalanced(TreeNode* root) {
    if(root==NULL)
        return 1;
    int l = height(root->left);
    int r = height(root->right);
    
    if(abs(l-r) <=1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    else
        return 0;
    
}

