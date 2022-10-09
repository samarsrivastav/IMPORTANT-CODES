#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* prev;

	Node(int data) {
		this -> data = data;
		next = NULL;
		prev = NULL;
	}
};

class LinkedList {
public:
	Node* reverse(Node* head) {
		Node* tmp = head;
		while(tmp != NULL) {
			Node* p = tmp->next;
			tmp->next = tmp->prev;
			tmp->prev = p;

			head = tmp;
			tmp = tmp->prev;
		}
		cout << endl;

		return head;
	}

	void display(Node* head) {
		Node* tmp = head;

		while(tmp != NULL) {
			cout << tmp->data << "-> ";
			tmp = tmp->next;
		}

		cout << endl;
	}
};

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	LinkedList* l = new LinkedList();
	bool flag = true;

	Node* head;
	Node* tail;

	while(n--) {
		int node;
		cout << "element: ";
		cin >> node;

		if(flag) {
			head = new Node(node);
			tail = head;

			flag = !flag;
		}
		else {
			tail->next = new Node(node);
			tail->next->prev = tail;

			tail = tail->next;
		}
	}

	l -> display(head);

	head = l -> reverse(head);

	l -> display(head);

	return 0;
}