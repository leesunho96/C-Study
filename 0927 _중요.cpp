#include "stdafx.h"
#include "Sub.h"
#include "Super.h"

/*
일반적으로 클래스는 그냥 생성되지 않음
객체는 base(부모) 클래스와 함께 생성
상속관계에서 생성 순서는
1. 상위 클래스가 존재 할 경우 상위 클래스의 디폴트 생성자 실행
2. 상위 클래스에 생성자 초기화 리스트로 상위 클래스의 생성자 명시시 해당 생성자 호출
3. static을 제외한 클래스 멤버들이 선언 순서대로 호출


소멸자 생성 순서: 생성자의 반대순서.
1. 해당 객체 소멸자 호출
2. DataMember 소멸자 호출
3. 부모 클래스의 소멸자 호출
*/



class Something
{
public:
	Something() { cout << "2. something" << endl; };
	~Something() { cout << "2. ~something" << endl; };
};

class Parent
{
public:
	Parent() { cout << "1. Parent" << endl; };
	Parent(int i) { cout << "1-1. Parent" << endl; };
	virtual ~Parent() { cout << "1. ~Parent" << endl; };
};


// Something이 먼저 생성되는 이유는 private 이기 떄문. private 먼저 초기화.
class Child : public Parent
{
	Something someData;
public:
	Child() : Parent(1){ cout << "3. Child" << endl; };

	// 소멸자 호출되기 이전에 이미 something 소멸됨.
	// 해당 객체 모든 내용 소멸 된 이후, 소멸자 호출.
	virtual ~Child() { cout << "3. ~Child" << endl; };
	
};

int main()
{
	//Child c1;


	// Parent* 이기 떄문에 Parent 소멸자 호출 => 부모 클래스 없음으로 소멸자 호출 종료
	// 메모리 leak
	// 따라서 상속 관계에 있어서는 반드시 소멸자는 virtual keyword 선언.
	// 최상위 클래스의 소멸자가 virtual 선언시 하위 클래스의 모든 소멸자는 따로 선언하지 않아도
	// virtual 소멸자로 정의됨.
	// 소멸자는 어지간하면 virtual 선언 할것.
	// virtual keyword 있으면 memset 사용하지 말것 => v-table 삭제
	Parent* pPtr = new Child();
	delete pPtr;


	return 0;
}