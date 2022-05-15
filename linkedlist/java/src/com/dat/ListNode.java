package com.dat;

public class ListNode<T> {

    // Atrributes
    public T value;
    public ListNode<T> next;

    // Constructors

    public ListNode() {
    }

    public ListNode(T value) {
        this.value = value;
    }

    public ListNode(T value, ListNode<T> next) {
        this.value = value;
        this.next = next;
    }

    // Bussiness code

    public void traversList(ListNode<T> head) {
        while (head != null) {
            System.out.println(head.value);
            head = head.next;
        }
    }

    public ListNode<T> addAtHead(ListNode<T> head, T value) {
        ListNode<T> newNode = new ListNode<>();
        newNode.value = value;

        if (head == null) {
            return newNode;
        }
        newNode.next = head;
        head = newNode;
        return newNode;
    }

    public void addAfter(ListNode<T> posNode, T value) {
        ListNode<T> newNode = new ListNode<>();
        newNode.value = value;
        if (posNode == null) {
            return;
        }
        if (posNode.next != null) {
            newNode.next = posNode.next.next;
        }
        posNode.next = newNode;
    }

    public ListNode<T> addAtTail(ListNode<T> head, T value) {
        ListNode<T> newNode = new ListNode<>();
        newNode.value = value;
        if (head == null) {
            return newNode;
        }
        ListNode<T> temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = newNode;
        return head;
    }

    public ListNode<T> deleteAtHead(ListNode<T> head) {
        if (head == null) {
            return head;
        }
        return head.next;
    }

    public void deleteAfter(ListNode<T> posNode) {
        if (posNode == null || posNode.next == null) {
            return;
        }
        posNode.next = posNode.next.next;
    }

    public ListNode<T> deleteAtTail(ListNode<T> head) {
        if (head == null || head.next == null) {
            return head;
        }
        ListNode<T> temp = head;
        ListNode<T> preNode = null;
        while (temp.next != null) {
            preNode = temp;
            temp = temp.next;
        }
        preNode.next = null;
        return head;
    }

    // Main

    public static void main(String[] args) {
        ListNode<Integer> head = new ListNode<>();
        head.value = 1;
        head = head.addAtHead(head, 0);
        head.addAfter(head.next, 2);
        head = head.addAtTail(head, 3);
        // head.deleteAtTail(head);
        // head = head.deleteAtHead(head);
        head.deleteAfter(head.next.next);
        head.traversList(head);
    }
}
