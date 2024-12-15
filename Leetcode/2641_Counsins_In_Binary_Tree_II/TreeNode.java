import java.util.ArrayList;
import java.util.List;

import javax.swing.tree.TreeNode;

    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode() {}
        TreeNode(int val) { this.val = val; }
        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;        this.left = left;
            this.right = right;
        }
    }
 
class Solution {
    private List<Integer> levelSums = new ArrayList<>();

    public static TreeNode replaceValueInTree(TreeNode root) {
        calculateLevelSums(root, 0); 
        root.val = 0;                
        replaceValues(root, 1);    
        return root; 
    }

    public void calculateLevelSums(TreeNode node, int depth) {
        if(node == null) {
            return;
        }

        if(levelSums.size() <= depth) {
            levelSums.add(0);
        }

        levelSums.set(depth, levelSums.get(depth) + node.val);
        calculateLevelSums(node.left, depth + 1);
        calculateLevelSums(node.right, depth + 1);
    }

    private void replaceValues(TreeNode node, int depth) {
        if (node == null) {
            return;
        }

        int leftValue = node.left == null ? 0 : node.left.val;
        int rightValue = node.right == null ? 0 : node.right.val;

        if (node.left != null) {
            node.left.val = levelSums.get(depth) - leftValue - rightValue;
        }

        if (node.right != null) {
            node.right.val = levelSums.get(depth) - leftValue - rightValue;
        }

        replaceValues(node.left, depth + 1);
        replaceValues(node.right, depth + 1);
    }
}