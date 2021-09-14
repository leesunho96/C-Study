#include "stdafx.h"

void printVector(vector<int> input)
{
	for (auto output : input)
	{
		cout << output << " , ";
	}
	cout << endl;
}

int main()
{
	// map : 연관 컨테이너. 
	// key-value 쌍으로 저장함.
	// STL : 4개의 연관 컨테이너 제공 -> map, multimap, set, multiset -> 내부에서 기준을 잡고 정렬함.

	// 비순차 연관 컨테이너 존재 (정렬을 하지 않음)
	// =>unorderd_map / unordered_multimap / unordered_set / unordered_multiset ==> hash

	// pair => 서로 다른 두개의 쌍을 하나의 값으로 grouping 하는 템플릿.
	// first / second로 접근 가능
	// 비교 연산자 적용 가능 => first 값 기준으로 대소 구분함.

	pair<string, int> myFirstPair("hello", 1); // string, int 두개의 값을 하나의 타입으로 정의
	pair<string, int> myOtherPair;

	myOtherPair.first = "hello";
	myOtherPair.second = 6;

	pair<string, int> myThirdPair(myOtherPair);

	if (myFirstPair < myOtherPair)
	{
		cout << "myFirstPair is bigger than myOtherPair" << endl;
	}
	else
	{
		cout << "myOtherpair is bigger than myFirstPair" << endl;
	}

	if (myThirdPair == myOtherPair)
	{
		cout << "myThirdPair is same with myOtherPair" << endl;
	}
	else
	{
		cout << "myOtherpair is different with myThridPair" << endl;
	}

	pair<int, int> aPair = make_pair(1, 2);
	auto secondPair = make_pair(3, 4);

	// 일반적인 pair에 포인터를 이용하면 문제 발생 가능 => pair의 복제생성은 얕은 복사임.
	// => 스마트포인터(sharedptr)사용시 문제 해결 가능.
	// shared_ptr : 하나의 메모리 주소를 여러개의 포인터가 가리킬 수 있음 : reference count를 가지고, 해당 주소를 가리키는 포인터의 개수를 저장.
	// 해당 포인터를 해제할때 referenced counter 가 0인 경우에만 해당 메모리를 해제하고, 그렇지 않은 경우 해제하지 않음.

	// map : key-value 쌍으로 존재.
	// 모든 작업을 key로 진행. key를 통해서 삽입/삭제/접근 모든 작업을 수행한다.
	// key를 값에 연관 지어줌 => mapping
	// red-black tree => 균형 이진 트리.

	// hash_map : hash table로 이루어짐. : hash 이용

	// hash_map과 map의 차이점 물어보는 문제 자주 출제.


	//Uniform 초기화
	map<string, int> m =
	{
		{"a", 1},
		{"b", 2}
	};

	//insert함수
	m.insert(make_pair("c", 3));

	// "a"의 키값을 가진 99 value 삽입.
	// "a"의 키값에 접근하는 방식이 아님. 새로운 데이터 삽입.
	m["a"] = 99;

	// map은 key값으로 데이터 삭제.
	// iterator 사용하지 않음.
	m.erase("a");

	if (m.empty == false)
	{
		cout << m.size() << endl;
	}

	cout << "a" << m.find("a")->second;

	// 일반 맵은 중복 key값을 가지지 못함. 중복 key를 가지려면 multi_map 이용.

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "key : " << iter->first << " " << "value : " << iter->second << endl;
	}

	for (auto i : m)
	{
		cout << "key : " << i.first << " value : " << i.second << endl;
	}
}