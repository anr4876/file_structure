#include <iostream>
#include <string>
using namespace std;


typedef struct Personal_information {  // Personal_information ��� ����
	string name;
	string address;
	int phone_number;
	Personal_information* next;
};


Personal_information* Add_list(Personal_information* point, Personal_information* head)  // ��� �����ϰ� head�� ����
{
	Personal_information data;
	Personal_information* pd = &data;
	cout << "�ּҸ� �Է��ϼ��� : "  ;
	cin >> data.address;								// �ּ� ���� 
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> data.name;									// �̸� ����
	cout << "��ȣ�� �Է��ϼ��� : ";
	cin >> data.phone_number;							// ��ȣ ����
	data.next = point;									// ���� ������ ����� ���� �ּҸ� �������ش�
	return pd;
}

void list_print(Personal_information* Tail) {
	Personal_information* list = Tail;
	
	while(list->next == NULL) {
		list = list->next;
		cout << list->address << "\t";
		cout << list->name << "\t";
		cout << list->phone_number<<endl;


	}
 }


void main() 
{
	Personal_information Tail;						// ���� ����
	Personal_information head;						// �Ӹ� ����
	Tail.next = NULL;								// ���� ���� �ּ� NULL����
	head.next = NULL;
	Personal_information* point = &head;			// ���� ���� ����� �ּҸ� ������ ����
	int i = 0;
	while (1) {
		cout << "������ �߰��Ϸ��� 1, ������ 2, Ȯ���� 3�� �Է��Ͻÿ� : ";
		cin >> i;
		list_print(&Tail);
		if (i == 1) {
			Personal_information* pdata = Add_list(point, &head);		// ��� ������ pdata�� ���� ����� �ּ� ����
			Tail.next = pdata;											// ��� ���� ��忡 ������ �̾���
			point = pdata;
		}
		else if (i == 2) {

		}
		else {

		}
		
									// ���� ����� �ּҸ� ����
		
	}
	
}
