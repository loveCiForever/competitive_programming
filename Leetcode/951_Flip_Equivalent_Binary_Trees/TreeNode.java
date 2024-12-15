
public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) {this.val = val;}
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
}
public class Solution {
    public boolean flipEquiv(TreeNode root1, TreeNode root2) {
        return isFlipEquiv(root1, root2);
    }

    private boolean isFlipEquiv(TreeNode node1, TreeNode node2) {
        if(node1 == null && node2 == null) {
            return true;
        }
        if(node1 == null || node2 == null || node1.val != node2.val) {
            return false;
        }

        boolean checkNoFlip = isFlipEquiv(node1.left, node2.left) && isFlipEquiv(node1.right, node2.right);
        boolean checkYesFlip = isFlipEquiv(node1.left, node2.right) && isFlipEquiv(node1.right, node2.left);

        return checkNoFlip || checkYesFlip;
    }
}
