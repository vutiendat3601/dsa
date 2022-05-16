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
        TreeNode<Integer> n5 = new TreeNode<>(5);
        TreeNode<Integer> n6 = new TreeNode<>(6);
        TreeNode<Integer> n7 = new TreeNode<>(7);

        root = n5;

        n5.left = n1;
        n5.right = n6;
        n1.left = n0;
        n1.right = n3;
        n6.right = n7;
        n3.left = n2;
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
                root = root.right;
            } else if (value < root.value) {
                if (root.left == null) {
                    root.left = new TreeNode<>(value);
                    return;
                }
                root = root.left;
            }
        }
        insert(root, value);
    }

    private TreeNode<Integer> findLeftMostNode(TreeNode<Integer> root) {
        if (root == null) {
            return null;
        }
        TreeNode<Integer> res = root;
        while (root.left != null) {
            res = res.left;
        }
        return res;
    }

    public TreeNode<Integer> deleteNode(TreeNode<Integer> root, int key) {
        if (root == null) {
            return root;
        }
        if (key < root.value) {
            root.left = deleteNode(root.left, key);
        } else if (key > root.value) {
            root.right = deleteNode(root.right, key);
        } else {
            if (root.left == null && root.right == null) {
                return null;
            } else if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            }
            TreeNode<Integer> leftMostNode = findLeftMostNode(root.right);
            root.value = leftMostNode.value;
            root.right = deleteNode(root.right, leftMostNode.value);
        }
        return root;
    }
}
