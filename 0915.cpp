#include "stdafx.h"
#include "Character.h"


//LValue����
void Incr(int& value)
{
	cout << "lValue inrement with lValue reference" << endl;
	++value;
}

//RValue ����.
void Incr(int&& value)
{
	cout << "RValue inrement with lValue reference" << endl;
	++value;
	cout << value;
}

//void Incr(const int& value)
//{
//	cout << "RValue inrement with lValue reference" << endl;
//	//++value;
//}



int main()
{
	// ���� : �ش� ������ ���� ����. ��Ī. �Ǵٸ� �̸����� ����.
	// ������ ���� : �ּҰ� ����� �������� �ڵ����� �̷������ ������ ���� => ������ ������ ������ ����.
	// ������ ������ ������ ���ÿ� �ʱ�ȭ.
	// ������ ������ �̸��� ���� �ʴ� ��� ���� ���� �� �� ����.


	int a = 10;
	int& b = a;

	// a �� �ϴ� ���� ����.
	b++;


	// �̸��� ���� �ʴ� ���ͷ� ����� ���� �ϱ� ���ؼ��� const ������ �̿��ؾ� ��.
	// const ����� �ش� �������� ���� ���� �� �� ����.
	const int& unnamedrefferenced = 5;


	int x = 3, y = 4;
	int& xref = x;
	int& yref = y;


	// �ش� ���꿡���� ���� ������ ������ �Ͼ�°��� �ƴ϶� x�� ���� y���� �Ҵ��ϴ� ����.
	// �����ڴ� �ѹ� ���� ���� ���� �ش� ������ ������� ����.
	xref = yref;



	//�����ͺ����� ���� ������ ����.
	int* pint;
	int*& rpint = pint;
	rpint = new int;
	*rpint = 10;

	int ix = 3;
	int& xRef = ix;
	int* xPtr = &xRef;
	cout << *xPtr;

	// return ���� ����/������ ��ȯ ����.
	// �ش� return�� �����ϴ� �����Ͱ� �ش� �Լ��� ���������� ��ȯ �Ͽ����� �ȵ�.
	// ��ȯ�� �̹� �ش� �Լ��� ���� => stack frame �μ���. �ش� ������ �ǹ̸� ����.
	// �����Ⱚ ��ȯ.


	// const type& => ������ ���� �Ķ����. �ӽð�ü���� �ش� ������� �����.

	int a2 = 10, b2 = 20;

	// ������ ����.
	Incr(a2);

	// ������ ����.
	// �ش� ���� ������ �Ұ����ϱ� ������ error.
	Incr(a2 + b2);

	// move : LValue�� RValue�� ��ȯ�Ͽ� �����ϴ� �Լ�.
	Incr(move(b));


	// ������ ������ �Ϲ������� ���� �����Ͱ� ���� ���� �˰� ������ �̿�.
	// �ӽð�ü���� ���̽��� �̿�. �ӽð�ü�� �ش� ��ü�� ��� �� �Ŀ�. �ٽ� ȣ��ǰų� ���� ���ϰ�, ������. => �̵������� �̿�.
	// ������ ������ ���� ���� ���� ���� ���� �� �ʿ䰡 ����.
	// �̵� �ø�ƽ : �̵������� + �̵� ���� ������.
	// �̵� �ø�ƽ�� ���ܸ� �������� ����. => noexcept ���� �ʿ�

	// �̵������ڴ� classname(classname && src) noexcept
	// �̵������� ���ǽ� src�� �� ���� �޸𸮴� src���� ���� ������ ��ü�� �޸� ������ �̵�.
	//
	// this->pointeraddress  = src.pointeraddress => ������ �������� ���ο� ��ü�� �̵�.
	// src.pointeraddress = nullptr; => ������ ������ ����. �޸��� ���� ���� ����.
	// 


	// �̵���������ڴ� classname& classnale::operator(classname && rhs) noexcept
	// this->pointeraddress  = src.pointeraddress => ������ �������� ���ο� ��ü�� �̵�.
	// src.pointeraddress = nullptr; => ������ ������ ����. �޸��� ���� ���� ����.
	// return *this
	int&& test = a2 + b2;
}