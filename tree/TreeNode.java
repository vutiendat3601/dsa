package tree;

import linear.Queue;

/**
 * A node in the binary tree
 */
public class TreeNode<T> {
    // ## atrributes
    public T val;
    public TreeNode<T> left;
    public TreeNode<T> right;

    /* #: Constructors */
    public TreeNode() {
    }

    public TreeNode(T val) {
        this.val = val;
    }

    public TreeNode(T val, TreeNode<T> left, TreeNode<T> right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
    /* # Constructors */

    /* #: Bussiness code */
    public static <T> boolean isCompleteTree(TreeNode<T> root) {
        // BFS
        boolean nonFullNodeFound = false;
        Queue<TreeNode<T>> queue = new Queue<>();
        queue.enqueue(root);
        while (!queue.empty()) {
            TreeNode<T> node = queue.peek();
            queue.dequeue();
            if (node == null) {
                nonFullNodeFound = true;
                continue;
            }
            if (nonFullNodeFound) {
                return false;
            }
            queue.enqueue(node.left);
            queue.enqueue(node.right);
        }
        return true;
    }
    /* # Bussiness code */
}