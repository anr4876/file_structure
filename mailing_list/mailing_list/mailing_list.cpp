#include <iostream>
#include <string>
using namespace std;


typedef struct Personal_information {  // Personal_information 노드 형식
	string name;
	string address;
	int phone_number;
	Personal_information* next;
};


Personal_information* Add_list(Personal_information* point, Personal_information* head )  // 노드 생성하고 head에 연결
{
	Personal_information data;
	Personal_information* pd = &data;
	cout << "주소를 입력하세요 : "  ;
	cin >> data.address;								// 주소 저장 
	cout << "이름을 입력하세요 : ";
	cin >> data.name;									// 이름 저장
	cout << "번호를 입력하세요 : ";
	cin >> data.phone_number;							// 번호 저장
	if (point = NULL) {									// 처음 노드를 헤드에 연결
		data.next = head;
		return pd;										// 지금 만든 노드의 주소 반환
	}
	data.next = NULL;
	return pd;
}

void main() 
{
	Personal_information Tail;						// 꼬리 생성
	Personal_information head;						// 머리 생성
	Tail.next = NULL;								// 꼬리 앞의 주소 NULL지정
	Personal_information* point = NULL;				// 전에 만든 노드의 주소를 저장할 변수
	while (1) {
		Personal_information* pdata = Add_list(point, &head);		// 노드 생성후 pdata에 만든 노드의 주소 저장
		Tail.next = pdata;											// 방금 만든 노드에 꼬리를 이어줌
		
		if (point != NULL) {
			*pdata->next = *point;									// 만약 전에 만든 노드가 있으면 꼬리 -> 두번쨰에 만든 노드 -> 처음만든 노드 -> 머리 순으로 연결
		}
		point = pdata;								// 만든 노드의 주소를 저장
		
	}
	
}
