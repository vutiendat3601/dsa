#include <bits/stdc++.h>

using namespace std;

class Node {
public:
	int value;
	Node* next;

};

void printNodes(Node* head) {
	while (head != NULL) {
		cout << head->value << " ";
		head = head->next;
	}
	cout << endl;
}

void insertAtHead(Node* head, int value) {
	// 1. Prepare new node
	Node* newNode = new Node();
	newNode->value = value;

	// 2. Put newNode in front of current head
	newNode->next = head;

	// 3. Move head of the list to point to the newNode
	head = newNode;
}

void insertAtTail(Node** head, int value) {
	Node* newNode = new Node();
	newNode->value = value;

	if (*head == NULL) {
		(*head) = newNode;
		return;
	}

	Node*tmp = *head;

	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

void insertAtMid(Node*previous, int value) {
	if (previous == NULL) {
		return;
	}
	Node*newNode = new Node();
	newNode->value = value;
	newNode->next = previous->next;
	previous->next = newNode;
}

void insertAtMid(Node**head, int value, int pos) {
	Node*newNode = new Node();
	newNode->value = value;
	if (*head == NULL) {
		*head = newNode;
		return;
	}
	int cnt =0;
	Node * tmp = *head;
	while (tmp->next != NULL && cnt != pos-1) {
		tmp = tmp->next;
		cnt++;
	}
	if (cnt != pos-1) {return;}
	else {
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
}

int main() {
	Node* head = new Node();
	head->value = 1;
	Node* second = new Node();
	second->value = 2;
	Node* third = new Node();
	third->value = 3;
	head->next = second;
	second->next = third;
	third->next = NULL;

	head = NULL;
	insertAtHead(head, 6);
	printNodes(head);
	// insertAtTail(&head, 7);
	// printNodes(head);
	// head = NULL;
	// insertAtMid(second, 10);
	// printNodes(head);
}