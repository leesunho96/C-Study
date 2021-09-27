#include "stdafx.h"
#include "Super.h"
#include "Sub.h"


int main()
{
	Sub mysub;
	Super mySuper = mysub;

	mysub.someMethod();

	mySuper.someMethod();

	// UPCASTING. Super(부모)에 Sub(자식) 할당. 참조자로 선언하면 자식의 
	// 메소드들 모두 접근 가능해짐. 일반적인 선언시 부모의 메소드 접근.

	// 일반 선언 => 부모의 someMethod 접근
	//Super mysuper2 = mysub;
	// 참조자 선언 => 자식의 someMethod 접근
	Super& mysuper2 = mysub;
	mysuper2.someMethod();
	
	//UPCASTING 의 경우 자식의 기능은 상실. 
	//따라서 UPCASTING의 경우 항상 reference로 접근 => 자식 원본 접근 가능해짐.
	// 자식에서 오버라이딩한걸 보전 가능해짐.
	// UPCASTING은 항상 성립.


	Super* mySuper3 = nullptr;
	// 지양해야함. DOWNCASTING
	// 컴파일타임에 확인이 불가능.
	
	// 일반적으로 선언시 에러. => 런타임에 타입 체크를 미뤄야 함. => Dynamic_cast 필요

	//Sub* mysub2 = mySuper3;

	// dynamic_cast로 타입 체크를 런타임으로 미룸
	// 클래스 검사를 RTTI 검사 수행. Runtime Type Information
	// RTTI : 자식 객체가 어디서부터 온건지 검사.
	// 항상 실행되는 것은 아님. 해당 클래스 계층을 확인하여 상속관계 확인시
	// DOWNCASTING => 반드시 하나 이상의 Virtual Method가 존재 해야 함.
	// Virtual Keyword => V-Table 생성.
	// V table : 가상함수들의 포인터를 보관하고 있는 테이블.

	Sub* mysub2 = dynamic_cast<Sub*>(mySuper3);

	// 다운캐스팅은 컴파일 타임에 타입 검사가 불가능 => error. 일반적으로 사용 잘 안함.
	// 정상 작동 보장을 하지 못함.
	mysub2->someMethod();

	// V-Table 
	// 부모와 자식 각각 virtual keyword 갖는 메소드에 대한 함수 포인터 테이블을 갖는다.
	// 자식이 override 시 자식의 v-Table의 해당 메소드 테이블에 함수 포인터가 자식이 오버라이드한 메소드로
	// 바뀜.
	// override 하지 않은 경우 부모 클래스의 v-table의 해당 메소드 포인터를 가리킴.

	// virtual keyword 갖지 않은 부모 클래스의 메소드를 자식에 복사해서 가져온다. => memory leak.
}