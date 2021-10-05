#include "stdafx.h"
#include "Class.h"

//class test {
//public:
//	int val1;
//	int val2;
//
//public:
//	test(int val1, int val2) { this->val1 = val1, this->val2 = val2; };
//	template<typename t1>
//	test& operator +(t1 target) { this->val1 += target.val1; this->val2 += target.val2; return *this; };
//};
//
//class test2
//{
//public:
//	int val1, val2;
//public:
//	test2(int val1, int val2) { this->val1 = val1, this->val2 = val2; };
//
//	template<typename t1>
//	test2& operator +(t1 target) { this->val1 += target.val1; this->val2 += target.val2; return *this; };
//};
//
//// 해당 방식은 int 밖에 적용 불가능.
//void swap(int& val1, int &val2)
//{
//	int temp = val2;
//	val2 = val1;
//	val1 = temp;
//}

// 모든 타입에 대한 swap 구현 완료.
// 템플릿은 기본적으로 함수를 인라인화.
// 템플릿은 전처리기에서 정의 : header에 선언해야됨.
// 템플릿은 try-catch로 구현.
// 이동시멘틱은 예외처리 X => noexcept
// register: ram이 아니라 register에 저장하도록 하는 명령어.
// preheader가 빠른 이유는 해당 선언을 미리 선언해놓아 header 참조를 하지 않기 때문에 빨라짐.

//
//template <typename t1, typename t2>
//void swap(t1& val1, t2& val2)
//{
//	auto temp = val2;
//	val2 = val1;
//	val1 = temp;
//}
//
//template <typename t1>
//void Print(t1 input)
//{
//	cout << input << endl;
//}
//
//// 특수화 함수. 일반적인 케이스는 상단의 메소드 호출되지만, float인 경우 하단의 메소드 호출.
//template <>
//void Print(float data)
//{
//	cout << "특수화 함수 : " << data << endl;
//}
//
//
//template <typename T>
//void Print(T* input)
//{
//	cout << "포인터 함수 : " << *input << endl;
//}
//
//template <>
//void Print(test target)
//{
//	cout << target.val1 << "   " << target.val2 << endl;
//}
//
//template <>
//void Print(test2 target)
//{
//	cout << target.val1 << "   " << target.val2 << endl;
//}

//int main()
//{
//	int i = 10;
//
//	// 암시적 선언. i = int이기 때문에 자동으로 int
//	Print(i);
//
//	// 명시적 선언. i = int임을 명시적으로 선언. 해당방식을 주로 추천.
//	Print<int>(i);
//
//	float fdata = 20.1f;
//	Print<float>(fdata);
//	Print<int>(fdata);
//
//	int *iptr = &i;
//	Print(iptr);
//  return 0;
//}



int main()
{
	Class<string> myStringTemp("StringType");

	string temp = myStringTemp.getData();
	Class<string> myStringTemp2("temp2");
	//myStringTemp = myStringTemp2;
	cout << myStringTemp.getData() << endl;
	myStringTemp = myStringTemp + myStringTemp2;
	cout << myStringTemp.getData() << endl;

	Class<int> myIntTemp(12345);
	cout << myIntTemp.getData() << endl;

	Class<int> myIntTemp2(12345);
	myIntTemp = myIntTemp + myIntTemp2;
	cout << myIntTemp.getData() << endl;
}