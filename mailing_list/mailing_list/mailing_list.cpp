#include <iostream>
#include <string>
using namespace std;


typedef struct Personal_information {  // Personal_information ��� ����
	string name;
	string address;
	int phone_number;
	Personal_information* next;
};


Personal_information* Add_list(Personal_information* point, Personal_information* head )  // ��� �����ϰ� head�� ����
{
	Personal_information data;
	Personal_information* pd = &data;
	cout << "�ּҸ� �Է��ϼ��� : "  ;
	cin >> data.address;								// �ּ� ���� 
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> data.name;									// �̸� ����
	cout << "��ȣ�� �Է��ϼ��� : ";
	cin >> data.phone_number;							// ��ȣ ����
	if (point = NULL) {									// ó�� ��带 ��忡 ����
		data.next = head;
		return pd;										// ���� ���� ����� �ּ� ��ȯ
	}
	data.next = NULL;
	return pd;
}

void main() 
{
	Personal_information Tail;						// ���� ����
	Personal_information head;						// �Ӹ� ����
	Tail.next = NULL;								// ���� ���� �ּ� NULL����
	Personal_information* point = NULL;				// ���� ���� ����� �ּҸ� ������ ����
	while (1) {
		Personal_information* pdata = Add_list(point, &head);		// ��� ������ pdata�� ���� ����� �ּ� ����
		Tail.next = pdata;											// ��� ���� ��忡 ������ �̾���
		
		if (point != NULL) {
			*pdata->next = *point;									// ���� ���� ���� ��尡 ������ ���� -> �ι����� ���� ��� -> ó������ ��� -> �Ӹ� ������ ����
		}
		point = pdata;								// ���� ����� �ּҸ� ����
		
	}
	
}
