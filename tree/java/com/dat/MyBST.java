package com.dat;

public class MyBST<T extends Number> {
    public TreeNode<T> root;

    public MyBST() {
    }

    public TreeNode<T> insert(TreeNode<T> root, T val) {
        if (root == null) {
            this.root = new TreeNode<>(val);
        } else {
            TreeNode<T> temp = root;
            while (true) {
                if (val.doubleValue() > temp.val.doubleValue()) {
                    if (temp.right == null) {
                        temp.right = new TreeNode<>(val);
                        break;
                    } else {
                        temp = temp.right;
                    }
                } else if (val.doubleValue() < temp.val.doubleValue()) {
                    if (temp.left == null) {
                        temp.left = new TreeNode<>(val);
                        break;
                    } else {
                        temp = temp.left;
                    }
                }
            }
        }
        return this.root;
    }

    public TreeNode<T> insertIntoBST(TreeNode<T> root, T val) {
        if (root == null) {
            return new TreeNode<>(val);
        }
        if (val.doubleValue() < root.val.doubleValue()) {
            if (root.left == null) {
                root.left = new TreeNode<>(val);
            } else {
                insertIntoBST(root.left, val);
            }
        }
        if (val.doubleValue() > root.val.doubleValue()) {
            if (root.right==null){
                root.right=new TreeNode<>(val);
            } else {
                insert(root.right, val);
            }
        }
        return root;
    }

    // Main
    public static void main(String[] args) {
        // MyBST<Integer> bst = new MyBST<>();
        // bst.root = bst.insert(bst.root, 5);
        // bst.root = bst.insert(bst.root, 1);
        // bst.root = bst.insert(bst.root, 6);
        // bst.root = bst.insert(bst.root, 0);
        // bst.root = bst.insert(bst.root, 3);
        // bst.root = bst.insert(bst.root, 7);
        // bst.root = bst.insert(bst.root, 2);
        // bst.root = bst.insert(bst.root, 4);

        MyBST<Integer> bst = new MyBST<>();
        bst.root = bst.insertIntoBST(bst.root, 5);
        bst.root = bst.insertIntoBST(bst.root, 1);
        bst.root = bst.insertIntoBST(bst.root, 6);
        bst.root = bst.insertIntoBST(bst.root, 0);
        bst.root = bst.insertIntoBST(bst.root, 3);
        bst.root = bst.insertIntoBST(bst.root, 7);
        bst.root = bst.insertIntoBST(bst.root, 2);
        bst.root = bst.insertIntoBST(bst.root, 4);
        System.out.println("DONE");
    }
}
