#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

typedef struct Node {
	struct Node* next;
	string phone_number;
	char* name;
	char* adrress;
}node;

Node* node_plus(node* k) {
	char* add = new char;
	char* na = new char;
	string num = new char;
	node* node1 = new node;

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

void file_print(node* k) {
	node* node1 = k->next;

	FILE* m_file = fopen("mailing.txt", "w");

	while (node1 != NULL) {
		fprintf(m_file, "�ּ� : ");
		fprintf(m_file, node1->adrress);
		fprintf(m_file, "\t�̸� : ");
		fprintf(m_file, node1->name);
		fprintf(m_file, "\t��ȭ��ȣ : ");
		
		fprintf(m_file, &node1->phone_number[0]);
	
		fprintf(m_file, "\n");

		
		node1 = node1->next;
	}
	fclose(m_file);
}

int list_print(node* k) {
	node* node1 = k->next;
	int count = 1;
	while ( node1 != NULL) {
	
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
	node_address = node1->next;
	node1->next = node1->next->next;
	delete node_address;

}

int main() {

	node* head = new node;
	int k=0;
	int num;
	head->next = NULL;
	node* before_node = head;
	while (k != 3)
	{
		cout << "(�߰� 1, ���� 2, ���� 3) ��ȣ�� �Է��ϼ��� : ";
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
		file_print(head);
		
	}


	return 0;
}