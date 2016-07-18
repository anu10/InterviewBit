/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int isMirror( TreeNode *root1,  TreeNode *root2)
{
    // If both trees are empty, then they are mirror images
    if (root1 == NULL && root2 == NULL)
        return 1;
 
    // For two trees to be mirror images, the following three
    // conditions must be true
    // 1 - Their root node's key must be same
    // 2 - left subtree of left tree and right subtree
    //      of right tree have to be mirror images
    // 3 - right subtree of left tree and left subtree
    //      of right tree have to be mirror images
    if (root1 && root2 && root1->val == root2->val)
        return isMirror(root1->left, root2->right) &&
               isMirror(root1->right, root2->left);
 
    // if neither of above conditions is true then root1
    // and root2 are not mirror images
    return 0;
}

int Solution::isSymmetric(TreeNode* root) {
    
    return isMirror(root,root);
    
}

