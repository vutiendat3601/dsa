package com.dat;

public class App {
    public static void main(String[] args) {
        BinarySearchTree bst = new BinarySearchTree();
        bst.init();
        bst.insert(bst.getRoot(), 6);
        System.out.println();
    }
}
