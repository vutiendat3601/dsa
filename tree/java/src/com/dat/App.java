package com.dat;

public class App {
    public static void main(String[] args) {
        BinarySearchTree bst = new BinarySearchTree();
        bst.init();
        bst.insert(4);
        bst.deleteKey(1);
        System.out.println();
    }
}
