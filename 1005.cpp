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
//// �ش� ����� int �ۿ� ���� �Ұ���.
//void swap(int& val1, int &val2)
//{
//	int temp = val2;
//	val2 = val1;
//	val1 = temp;
//}

// ��� Ÿ�Կ� ���� swap ���� �Ϸ�.
// ���ø��� �⺻������ �Լ��� �ζ���ȭ.
// ���ø��� ��ó���⿡�� ���� : header�� �����ؾߵ�.
// ���ø��� try-catch�� ����.
// �̵��ø�ƽ�� ����ó�� X => noexcept
// register: ram�� �ƴ϶� register�� �����ϵ��� �ϴ� ��ɾ�.
// preheader�� ���� ������ �ش� ������ �̸� �����س��� header ������ ���� �ʱ� ������ ������.

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
//// Ư��ȭ �Լ�. �Ϲ����� ���̽��� ����� �޼ҵ� ȣ�������, float�� ��� �ϴ��� �޼ҵ� ȣ��.
//template <>
//void Print(float data)
//{
//	cout << "Ư��ȭ �Լ� : " << data << endl;
//}
//
//
//template <typename T>
//void Print(T* input)
//{
//	cout << "������ �Լ� : " << *input << endl;
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
//	// �Ͻ��� ����. i = int�̱� ������ �ڵ����� int
//	Print(i);
//
//	// ����� ����. i = int���� ��������� ����. �ش����� �ַ� ��õ.
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