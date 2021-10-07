#include "stdafx.h"
#include <memory>



int main()
{
/*
람다 표현식(익명 함수)
캡쳐 블록([]) : 외부 블록에 사용되는 변수 등을 람다 표현식 내부에서 사용 가능하게 함. 값에 의한 복제
	// [=] : 주변 스코프 모든 변수 캡쳐 가능
	// [&] : 주변 스코프 모든 변수 참조로 캡쳐 가능
	// [-, &x, &y] : x, y는 참조로 캡쳐, 나머지 모든 변수는 값으로 캡쳐
	// [&, x] : x는 값으로 캡쳐, 나머지 모든 변수는 참조로 캡쳐
*/
	//// 람다 표현식 사용 (매개변수 없는 경우)
	//auto basicLambda = [] {cout << "Hello World! from Lambda" << endl; };
	//basicLambda();

	//// 람다표현식 사용(매개변수 있는 경우)
	//auto parameterLambda = [](int value) {cout << "called parameterLambda with value " << value << endl; };
	//parameterLambda(10);

	//// 람다표현식 사용(반환값 int 있는 경우)
	//auto returningLambda = [](int val1, int val2) -> int {return val1 + val2; };
	//cout << returningLambda(10, 11) << endl;


	//// 람다표현식 사용(반환값 정의 하지 않는 경우(자동으로 반환))
	//auto returningLambda2 = [](int val1, int val2) {
	//	cout << "called returninglambda2 with non definition return type ";
	//	return val1 + val2 / 5; };
	//cout << returningLambda2(10, 11) << endl;


	//int temp = 10;
	//// 람다표현식(캡쳐블록에 데이터 입력, call by value, value는 디폴트로 const선언되어있음)
	//auto lambdaUsingCapture = [temp](int a, int b)
	//{	
	//	cout << "lambdaUsingCapture with capture ";
	//	return temp + a + b;
	//};
	//cout << lambdaUsingCapture(10, 11) << endl;

	//// 람다표현식(캡쳐블록의 데이터 const속성 삭제 방법)
	//auto lambdaUsingCapturewithNonconst  = [temp] () mutable
	//{
	//	cout << "lambdaUsingCapture with capture and mutable with value " << temp;
	//	temp++;
	//	return temp;
	//};
	//cout << lambdaUsingCapturewithNonconst() << endl;

	//// 람다표현식 참조자선언, 원본 접근
	//auto lambdaUsingCaptureWithReference = [&temp]()
	//{
	//	cout << "lambdaUsingCaptureWIthRefernce with value : " << temp << endl;
	//	temp++;
	//	return temp;
	//};
	//cout << lambdaUsingCaptureWithReference() << endl;


	//// 캡쳐블록 내부에서 변수 선언가능, 해당 값은 const 속성 갖지 않음.
	//double pi = 3.14159;
	//auto myLambda = [myCapture = "pi", pi]() {cout << myCapture <<  "  " << pi; };
	//myLambda();


/*
스마트포인터 : 사용자의 new/delete 메모리 관리 문제 해결하기 위해서 등장.

shared_ptr : 메모리의 다중참조(클래스 내의 동적메모리 영역 얕은복사시 등) 해당 메모리 낭비 방지.
			 메모리 참조시 참조 카운터 생성, 해당 메모리 참조/해제시마다 증감, 0이 되면 해당 메모리 해제.
			 shared_ptr 객체에 포인터를 바로 대입하면 컴파일시 에러가 발생합니다.
             왜냐하면 shared_ptr 생성자의 아규먼트는 명시적(Explicit)이어야 하는데 아래 코드는 암시적(Implicit)이기 때문입니다.
			 shared_ptr<int> a = new int; // => 에러
			 shared_ptr<int> a = make_shared(int); // OK

unique_ptr : 메모리의 단독 소유권, 해당 메모리가 가리키는 힙 메모리 소유권을 줌. reference counter가 1을 넘길 수 없음. 
			 하나의 포인터만 메모리 주소 소유 가능.
			 move함수를 이용하여 객체의 소유권 전달 가능, 그러나 복사는 할 수 없다.
weaked_ptr : 상호참조 문제 해결.
             weak_ptr은 하나 이상의 shared_ptr가 가리키는 객체를 참조할수 있지만 reference count를 늘리지않는 스마트 포인터이다. 
             shared_ptr을 사용할때 발생할 수 있는 문제를 해결하기 위해 사용된다.
             shared_ptr은 하나의 객체를 여러 스마트 포인터가 가리키고 reference count를 통해 동작한다.
             그런데 만약 서로가 서로를 가리키는 shared_ptr을 가지게 되면 reference count가 0이 될 수가 없으므로 
             메모리가 해제되지 않는 순환 참조(circular reference)가 발생하게 된다. 
             weak_ptr은 이러한 순환 참조를 제거하기 위해 사용된다.

// 메모리 자동으로 삭제 => delete 필요 없음.
스마트포인터 특징들 설명, 작동원리 필기시험 나옴.

*/

	//class Simple
	//{
	//	//shared_ptr<int> ptr;
	//public:
	//	Simple() { cout << "simple constructor called" << endl; };
	//	void doSimple() { cout << "DoSimple" << endl; };
	//	virtual ~Simple() {cout << "simple Destructor called" << endl; };
	//};


	//Simple* mysimplePtr = new Simple();
	//// 위 아래는 동일한 방식.
	//// auto로 한 이유 : 자료형 애매할떄. 복잡함.
	//auto mySimpleSmartPtr = make_unique<Simple>();
	//// int 배열 unique로 선언.
	//auto myVariablesizedArray = make_unique<int[]>(10);


	//// C스타일 배열은 shared_Ptr에 담을 수 없음 => STL 사용.
	//auto mySimpleSharedPtr = make_shared<Simple>();
	//auto mySimpleTest = mySimpleSharedPtr;
	//
	//mySimpleSharedPtr->doSimple();
	//mySimpleTest->doSimple();

	//
	class Nothing
	{
	public:
		Nothing() { cout << "Nothing::Nothing()" << endl; };
		virtual ~Nothing() { cout << "Nothing::~Nothing()" << endl; };
	};

	// 하나의 메모리를 여러개의 스마트포인터가 가리킴. => 생성자, 소멸자 한번씩만 나옴.
	auto myNothing = make_shared<Nothing>();
	shared_ptr<Nothing> smartPtr1(myNothing);
	shared_ptr<Nothing> smartPtr2(myNothing);



	return 0;
}

// 람다, 스마트포인터 설명.