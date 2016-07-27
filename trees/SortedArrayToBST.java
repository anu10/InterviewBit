/**
 * Definition for binary tree
 * class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public TreeNode sortedArrayToBST(List<Integer>num, int start, int end) {
		if (start > end)
			return null;
 
		int mid = (start + end) / 2;
		TreeNode root = new TreeNode(num.get(mid));
		root.left = sortedArrayToBST(num, start, mid - 1);
		root.right = sortedArrayToBST(num, mid + 1, end);
 
		return root;
	}
	public TreeNode sortedArrayToBST(final List<Integer> a) {
	    if (a.size() == 0)
			return null;
 
		return sortedArrayToBST(a, 0, a.size() - 1);
	}
}

