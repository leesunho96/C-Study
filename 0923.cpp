#include "stdafx.h"
#include "Character.h"
#include "Sub.h"
#include "Super.h"

// reinterpret_cast<>의 사용처.
//extern void ThridPartyLibrary(char* str);

//void Func(const char* str)
//{
//	// 해당 방식은 error : const char*을 char*에 넘겨 줄 수 없기 떄문.
//	//ThridPartyLibrary(str);
//
//	// 
//	ThridPartyLibrary(const_cast<char*>(str));
//}


int main()
{
	//// INTPTR = int*
	//typedef int* INTPTR;

	//// MyIntPTR = int*
	//using MyintPTR = int*;


	//// typedef / using = type을 정의함.




	//// const_cast : 상수 속성을 없애는 방법.
	//// 최대한 안쓰는 방법이 맞음.
	//// 일반적으로 써드파티에서 제공하는 경우 억지로 넘기는 방식..


	//// const_cast<>, static_cast<>, reinterpret_cast<> 사용처, 차이점 구분.
	//// static_cast<> 가 일반적으로 많이 사용하는 방식.
	//// static_cast가 일반적으로 c스타일의 ()캐스팅과 거의 동일함.

	//// reinterpret_cast<>
	//class Y {};
	//class X {};

	//X x;
	//Y y;
	//X* xp = &x;
	//Y* yp = &y;


	//// 전혀 관계 없는 포인터 이기 떄문에 형변환 이루어지지 않음.
	////xp = static_cast<X*>(yp);

	//// reinterpret_cast는 강제로 변경 가능 하게함.
	//// 일반적으로 쓰이지는 않음.
	//xp = reinterpret_cast<X*>(yp);

	//return 0;
	


	Sub mySub;
	Super mySuper;

	// 오버 라이딩시 virtual 키워드가 없는 경우 부모 클래스의 함수를 자식 클래스에 그대로 복사해와서 구현.
	// 오버라이딩한 함수일 경우 override 키워드 추가해주는것이 좋음.
	// virtual func() overrride;


	static_cast<Super>(mySub).someMethod();
	mySub.someMethod();
	//cout <<"Super : " << mySuper.getInt() << endl;
	//cout <<"Sub :: " << mySub.getInt() << endl;



}