#include "stdafx.h"
#include <memory>



int main()
{
/*
���� ǥ����(�͸� �Լ�)
ĸ�� ���([]) : �ܺ� ��Ͽ� ���Ǵ� ���� ���� ���� ǥ���� ���ο��� ��� �����ϰ� ��. ���� ���� ����
	// [=] : �ֺ� ������ ��� ���� ĸ�� ����
	// [&] : �ֺ� ������ ��� ���� ������ ĸ�� ����
	// [-, &x, &y] : x, y�� ������ ĸ��, ������ ��� ������ ������ ĸ��
	// [&, x] : x�� ������ ĸ��, ������ ��� ������ ������ ĸ��
*/
	//// ���� ǥ���� ��� (�Ű����� ���� ���)
	//auto basicLambda = [] {cout << "Hello World! from Lambda" << endl; };
	//basicLambda();

	//// ����ǥ���� ���(�Ű����� �ִ� ���)
	//auto parameterLambda = [](int value) {cout << "called parameterLambda with value " << value << endl; };
	//parameterLambda(10);

	//// ����ǥ���� ���(��ȯ�� int �ִ� ���)
	//auto returningLambda = [](int val1, int val2) -> int {return val1 + val2; };
	//cout << returningLambda(10, 11) << endl;


	//// ����ǥ���� ���(��ȯ�� ���� ���� �ʴ� ���(�ڵ����� ��ȯ))
	//auto returningLambda2 = [](int val1, int val2) {
	//	cout << "called returninglambda2 with non definition return type ";
	//	return val1 + val2 / 5; };
	//cout << returningLambda2(10, 11) << endl;


	//int temp = 10;
	//// ����ǥ����(ĸ�ĺ�Ͽ� ������ �Է�, call by value, value�� ����Ʈ�� const����Ǿ�����)
	//auto lambdaUsingCapture = [temp](int a, int b)
	//{	
	//	cout << "lambdaUsingCapture with capture ";
	//	return temp + a + b;
	//};
	//cout << lambdaUsingCapture(10, 11) << endl;

	//// ����ǥ����(ĸ�ĺ���� ������ const�Ӽ� ���� ���)
	//auto lambdaUsingCapturewithNonconst  = [temp] () mutable
	//{
	//	cout << "lambdaUsingCapture with capture and mutable with value " << temp;
	//	temp++;
	//	return temp;
	//};
	//cout << lambdaUsingCapturewithNonconst() << endl;

	//// ����ǥ���� �����ڼ���, ���� ����
	//auto lambdaUsingCaptureWithReference = [&temp]()
	//{
	//	cout << "lambdaUsingCaptureWIthRefernce with value : " << temp << endl;
	//	temp++;
	//	return temp;
	//};
	//cout << lambdaUsingCaptureWithReference() << endl;


	//// ĸ�ĺ�� ���ο��� ���� ���𰡴�, �ش� ���� const �Ӽ� ���� ����.
	//double pi = 3.14159;
	//auto myLambda = [myCapture = "pi", pi]() {cout << myCapture <<  "  " << pi; };
	//myLambda();


/*
����Ʈ������ : ������� new/delete �޸� ���� ���� �ذ��ϱ� ���ؼ� ����.

shared_ptr : �޸��� ��������(Ŭ���� ���� �����޸� ���� ��������� ��) �ش� �޸� ���� ����.
			 �޸� ������ ���� ī���� ����, �ش� �޸� ����/�����ø��� ����, 0�� �Ǹ� �ش� �޸� ����.
			 shared_ptr ��ü�� �����͸� �ٷ� �����ϸ� �����Ͻ� ������ �߻��մϴ�.
             �ֳ��ϸ� shared_ptr �������� �ƱԸ�Ʈ�� �����(Explicit)�̾�� �ϴµ� �Ʒ� �ڵ�� �Ͻ���(Implicit)�̱� �����Դϴ�.
			 shared_ptr<int> a = new int; // => ����
			 shared_ptr<int> a = make_shared(int); // OK

unique_ptr : �޸��� �ܵ� ������, �ش� �޸𸮰� ����Ű�� �� �޸� �������� ��. reference counter�� 1�� �ѱ� �� ����. 
			 �ϳ��� �����͸� �޸� �ּ� ���� ����.
			 move�Լ��� �̿��Ͽ� ��ü�� ������ ���� ����, �׷��� ����� �� �� ����.
weaked_ptr : ��ȣ���� ���� �ذ�.
             weak_ptr�� �ϳ� �̻��� shared_ptr�� ����Ű�� ��ü�� �����Ҽ� ������ reference count�� �ø����ʴ� ����Ʈ �������̴�. 
             shared_ptr�� ����Ҷ� �߻��� �� �ִ� ������ �ذ��ϱ� ���� ���ȴ�.
             shared_ptr�� �ϳ��� ��ü�� ���� ����Ʈ �����Ͱ� ����Ű�� reference count�� ���� �����Ѵ�.
             �׷��� ���� ���ΰ� ���θ� ����Ű�� shared_ptr�� ������ �Ǹ� reference count�� 0�� �� ���� �����Ƿ� 
             �޸𸮰� �������� �ʴ� ��ȯ ����(circular reference)�� �߻��ϰ� �ȴ�. 
             weak_ptr�� �̷��� ��ȯ ������ �����ϱ� ���� ���ȴ�.

// �޸� �ڵ����� ���� => delete �ʿ� ����.
����Ʈ������ Ư¡�� ����, �۵����� �ʱ���� ����.

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
	//// �� �Ʒ��� ������ ���.
	//// auto�� �� ���� : �ڷ��� �ָ��ҋ�. ������.
	//auto mySimpleSmartPtr = make_unique<Simple>();
	//// int �迭 unique�� ����.
	//auto myVariablesizedArray = make_unique<int[]>(10);


	//// C��Ÿ�� �迭�� shared_Ptr�� ���� �� ���� => STL ���.
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

	// �ϳ��� �޸𸮸� �������� ����Ʈ�����Ͱ� ����Ŵ. => ������, �Ҹ��� �ѹ����� ����.
	auto myNothing = make_shared<Nothing>();
	shared_ptr<Nothing> smartPtr1(myNothing);
	shared_ptr<Nothing> smartPtr2(myNothing);



	return 0;
}

// ����, ����Ʈ������ ����.