#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

typedef struct Node {
	struct Node* next;
	char* phone_number;
	char* name;
	char* adrress;
}node;

Node* node_plus(node* k) {
	char* add = (char*)malloc(sizeof(char));
	char* na = (char*)malloc(sizeof(char));
	char* num = (char*)malloc(sizeof(char));
	node* node1 = (node*)malloc(sizeof(node));

	cout << "�ּҸ� �Է��ϼ��� : ";
	cin >> add;
	node1->adrress = add;
	
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> na;
	node1->name = na;

	cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
	cin >> num;
	node1->phone_number = num;

	node1->next = NULL;
	k->next = node1;
	node1;
	return node1;
}


int list_print(node* k) {
	node* node1 = k->next;
	int count = 1;
	while ( node1 != NULL) {
		cout << count << "��" << "\t";
		cout << node1->adrress << "\t";
		cout << node1->name << "\t";
		cout << node1->phone_number << endl;
		node1 = node1->next;
		count++;
	}
	return count;
}

void list_delete(node* k,int num) {
	int count = 0;
	node* node_address;
	node* node1 = k;
	
	while (count != num-1 ) {
		node1 = node1->next;
		count++;

	}
	if (node1->next == NULL) {

	}
	node_address = node1->next;
	node1->next = node1->next->next;
	free(node_address);

}

int main() {

	node* head = (node*)malloc(sizeof(node));
	int k;
	int num;
	head->next = NULL;
	node* before_node = head;
	while (true)
	{
		cout << "(�߰� 1, ���� 2) ��ȣ�� �Է��ϼ��� : ";
		cin >> k;
		int count = list_print(head);
		if (k == 1) {
			before_node = node_plus(before_node);
			list_print(head);
		}
		else if(k == 2) {
			cout << "������ ��ȣ�� �Է��ϼ��� : ";
			cin >> num;
			while (num < 1 || num > count ) {
				cout << "�ٽ� �Է��ϼ��� : ";
				cin >> num;
			}
			list_delete(head, num);
			list_print(head);
		}

	}


	return 0;
}