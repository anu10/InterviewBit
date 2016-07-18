/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* root, int sum) {
    if(root == NULL){
        return (sum==0);
    }
    
    int ans = 0;
    int subSum = sum - root->val;
    if(subSum == 0 && root->left == NULL && root->right == NULL)
        return 1;
    
    if(root->left)
      ans = ans || hasPathSum(root->left, subSum);
    if(root->right)
      ans = ans || hasPathSum(root->right, subSum);
  
    return ans;
}

