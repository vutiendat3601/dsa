package com.dat;

public class BinaryTree {
    // Attribtes
    private TreeNode<Integer> root;

    // Constructors

    public BinaryTree() {
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
}
