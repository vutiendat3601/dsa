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

    // INSERT

    public void insert(int key) {
        root = insertRecur(root, key);
    }

    private TreeNode<Integer> insertRecur(TreeNode<Integer> root, int key) {

        if (root == null) {
            root = new TreeNode<>(key);
            return root;
        }

        if (key < root.value) {
            root.left = insertRecur(root.left, key);
        } else if (key > root.value) {
            root.right = insertRecur(root.right, key);
        }

        return root;
    }

    // DELETE

    public void deleteKey(int key) {
        root = deleteRecur(root, key);
    }

    private int findMinLeftValue(TreeNode<Integer> root) {
        int res = root.value;
        while (root.left != null) {
            root = root.left;
            res = root.value;
        }
        return res;
    }

    private TreeNode<Integer> deleteRecur(TreeNode<Integer> root, int key) {
        if (root == null) {
            return root;
        }

        if (key < root.value) {
            root.left = deleteRecur(root.left, key);
        } else if (key > root.value) {
            root.right = deleteRecur(root.right, key);
        } else {
            if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            }
            int minLeftValue = findMinLeftValue(root.right);
            root.value = minLeftValue;
            root.right = deleteRecur(root.right, minLeftValue);
        }
        return root;
    }
}