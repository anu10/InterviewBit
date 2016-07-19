/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int treePathsSumUtil(TreeNode *root, int x){
    if(root==NULL)
        return 0;
    x = 10*x + root->val;
    x = x%1003;
    
    if(root->left == NULL && root->right == NULL)
        return x;
    return treePathsSumUtil(root->left,x) + treePathsSumUtil(root->right,x);
}
int Solution::sumNumbers(TreeNode* root) {
    return treePathsSumUtil(root, 0)%1003;
}

