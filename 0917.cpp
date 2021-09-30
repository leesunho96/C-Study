#include "stdafx.h"
#include "Character.h"


//LValue참조
void incr(int& value)
{
	cout << "lvalue inrement with lvalue reference" << endl;
	++value;
	//cout << value << endl;
}

//rvalue 참조.
void Incr(int&& value)
{
	cout << "&&value inrement with lvalue reference" << endl;
	//++value;
	//cout << value << endl;
}

void Incr(const int& value)
{
	cout << "const &Value inrement with lValue reference" << endl;
	cout << value << endl;
	//++value;
}




int main()
{
	// 참조 : 해당 변수에 대한 별명. 별칭. 또다른 이름으로 이해.
	// 참조형 변수 : 주소값 추출과 역참조가 자동으로 이루어지는 포인터 변수 => 참조형 변수는 원본에 접근.
	// 참조형 변수는 생성과 동시에 초기화.
	// 참조형 변수는 이름을 갖지 않는 상수 등은 참조 할 수 없음.


	int a = 10;
	int& b = a;

	// a 라 하는 원본 접근.
	b++;


	// 이름을 갖지 않는 리터럴 상수를 참조 하기 위해서는 const 참조를 이용해야 함.
	// const 선언시 해당 참조값의 값을 변경 할 수 없음.
	const int& unnamedrefferenced = 5;


	int x = 3, y = 4;
	int& xref = x;
	int& yref = y;


	// 해당 연산에서는 참조 연산의 변경이 일어나는것이 아니라 x의 값에 y값을 할당하는 연산.
	// 참조자는 한번 참조 선언 이후 해당 참조가 변경되지 않음.
	xref = yref;



	//포인터변수에 대한 참조자 선언.
	int* pint;
	int*& rpint = pint;
	rpint = new int;
	*rpint = 10;

	int ix = 3;
	int& xRef = ix;
	int* xPtr = &xRef;
	//cout << *xPtr;

	// return 에도 참조/포인터 반환 가능.
	// 해당 return시 참조하는 데이터가 해당 함수의 지역변수를 반환 하여서는 안됨.
	// 반환시 이미 해당 함수는 종료 => stack frame 부서짐. 해당 변수는 의미를 잃음.
	// 쓰레기값 반환.


	// const type& => 우측값 참조 파라미터. 임시객체등이 해당 방식으로 선언됨.

	int a2 = 10, b2 = 20;

	// 좌측값 참조.
	Incr(move(a2));

	// 우측값 참조.
	// 해당 값은 참조가 불가능하기 떄문에 error.
	//Incr(a2 + b2);

	// move : LValue를 RValue로 변환하여 전달하는 함수.
	Incr(move(b));

	Incr(5);
	// 우측값 참조는 일반적으로 원본 데이터가 삭제 됨을 알고 있을때 이용.
	// 임시객체같은 케이스에 이용. 임시객체는 해당 객체가 사용 된 후에. 다시 호출되거나 하지 못하고, 삭제됨. => 이동생성자 이용.
	// 어차피 삭제될 꺼라 궂이 깊은 복사 등을 할 필요가 없음.
	// 이동 시멘틱 : 이동생성자 + 이동 대입 연산자.
	// 이동 시멘틱은 예외를 인정하지 않음. => noexcept 선언 필요

	// 이동생성자는 classname(classname && src) noexcept
	// 이동생성자 정의시 src의 힙 영역 메모리는 src에서 새로 생성될 객체로 메모리 소유권 이동.
	//
	// this->pointeraddress  = src.pointeraddress => 원본의 소유권을 새로운 객체로 이동.
	// src.pointeraddress = nullptr; => 원본의 소유권 포기. 메모리의 소유 권한 포기.
	// 


	// 이동복사생성자는 classname& classnale::operator(classname && rhs) noexcept
	// this->pointeraddress  = src.pointeraddress => 원본의 소유권을 새로운 객체로 이동.
	// src.pointeraddress = nullptr; => 원본의 소유권 포기. 메모리의 소유 권한 포기.
	// return *this
	int&& test = a2 + b2;
	Incr(test);
}