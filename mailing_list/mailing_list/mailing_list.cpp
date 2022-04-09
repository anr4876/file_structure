#include <iostream>
#include <string>
using namespace std;


typedef struct Personal_information {  // Personal_information 노드 형식
	string name;
	string address;
	int phone_number;
	Personal_information* next;
};


Personal_information* Add_list(Personal_information* point, Personal_information* head)  // 노드 생성하고 head에 연결
{
	Personal_information data;
	Personal_information* pd = &data;
	cout << "주소를 입력하세요 : "  ;
	cin >> data.address;								// 주소 저장 
	cout << "이름을 입력하세요 : ";
	cin >> data.name;									// 이름 저장
	cout << "번호를 입력하세요 : ";
	cin >> data.phone_number;							// 번호 저장
	data.next = point;									// 지금 생성한 노드의 다음 주소를 설정해준다
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
	Personal_information Tail;						// 꼬리 생성
	Personal_information head;						// 머리 생성
	Tail.next = NULL;								// 꼬리 앞의 주소 NULL지정
	head.next = NULL;
	Personal_information* point = &head;			// 전에 만든 노드의 주소를 저장할 변수
	int i = 0;
	while (1) {
		cout << "정보를 추가하려면 1, 삭제는 2, 확인은 3을 입력하시오 : ";
		cin >> i;
		list_print(&Tail);
		if (i == 1) {
			Personal_information* pdata = Add_list(point, &head);		// 노드 생성후 pdata에 만든 노드의 주소 저장
			Tail.next = pdata;											// 방금 만든 노드에 꼬리를 이어줌
			point = pdata;
		}
		else if (i == 2) {

		}
		else {

		}
		
									// 만든 노드의 주소를 저장
		
	}
	
}
