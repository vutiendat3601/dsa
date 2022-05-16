package com.dat;

public class BinarySearchTree {
    // Attribtes
    private TreeNode<Integer> root;

    // Getters, setter

    public TreeNode<Integer> getRoot() {
        return root;
    }

    // Constructors

    public BinarySearchTree() {
    }

    // Bussiness code

    public void init() {
        TreeNode<Integer> n0 = new TreeNode<>(0);
        TreeNode<Integer> n1 = new TreeNode<>(1);
        TreeNode<Integer> n2 = new TreeNode<>(2);
        TreeNode<Integer> n3 = new TreeNode<>(3);
        TreeNode<Integer> n4 = new TreeNode<>(4);
        TreeNode<Integer> n5 = new TreeNode<>(5);

        root = n0;

        n0.left = n1;
        n0.right = n2;
        n1.left = n3;
        n1.right = n4;
        n2.right = n5;
    }

    public void insert(TreeNode<Integer> root, int value) {
        if (root == null) {
            this.root = new TreeNode<>(value);
        } else {
            if (value > root.value) {
                if (root.right == null) {
                    root.right = new TreeNode<>(value);
                    return;
                }
                root=root.right;
            } else if (value < root.value) {
                if (root.left == null) {
                    root.left = new TreeNode<>(value);
                    return;
                }
                root=root.left;
            }
        }
        insert(root, value);
    }
}
