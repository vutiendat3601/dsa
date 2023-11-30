package tree;

public class BinarySearchTree {
    // ## Attributes
    private TreeNode<Integer> root;
    private int size;

    /* #: Constructors */
    public BinarySearchTree() {
    }

    public BinarySearchTree(int... values) {
        if (values != null) {
            for (int val : values) {
                addNode(val);
            }
        }
    }
    /* # Constructors */

    /* #: Bussiness code */
    public void addNode(int val) {
        root = addNode(root, val);
    }

    public boolean removeNode(int val) {
        int oldSize = size;
        root = removeNode(root, val);
        return oldSize == size;
    }

    public int size() {
        return size;
    }
    /* # Bussiness code */

    /* #: Helper */
    private TreeNode<Integer> addNode(TreeNode<Integer> node, int val) {
        if (node == null) {
            size++;
            return new TreeNode<>(val);
        }
        if (val < node.val) {
            node.left = addNode(node.left, val);
        } else if (val > node.val) {
            node.right = addNode(node.right, val);
        }
        return node;
    }

    private TreeNode<Integer> removeNode(TreeNode<Integer> node, int val) {
        if (node == null) {
            return null;
        }
        if (val < node.val) {
            node.left = removeNode(node.left, val);
        } else if (val > node.val) {
            node.right = removeNode(node.right, val);
        } else {
            if (node.left == null) {
                size--;
                return node.right;
            } else if (node.right == null) {
                size--;
                return node.left;
            }
            TreeNode<Integer> minNodeOfRight = findMinNodeOfRight(node.right);
            node.val = minNodeOfRight.val;
            node.right = removeNode(node.right, minNodeOfRight.val);
        }
        return node;
    }

    private TreeNode<Integer> findMinNodeOfRight(TreeNode<Integer> node) {
        if (node == null) {
            return node;
        }
        while (node.left != null) {
            node = node.left;
        }
        return node;
    }
    /* # Helper */

    public static void main(String[] args) {
        BinarySearchTree bst = new BinarySearchTree(5, 1, 2, 3, 4);
        TreeNode<Integer> n3 = new TreeNode<Integer>(3);
        TreeNode<Integer> n2 = new TreeNode<Integer>(2, n3, null);
        TreeNode<Integer> n1 = new TreeNode<Integer>(1, n2, null);
        System.out.println(TreeNode.isCompleteTree(n1));
        bst = new BinarySearchTree();
        // bst.removeNode(1);
        // bst.addNode(10);
        System.out.println("size: " + bst.size());
    }
}
