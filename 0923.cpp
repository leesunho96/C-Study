#include "stdafx.h"
#include "Character.h"
#include "Sub.h"
#include "Super.h"
#include <bitset>

// reinterpret_cast<>�� ���ó.
//extern void ThridPartyLibrary(char* str);

//void Func(const char* str)
//{
//	// �ش� ����� error : const char*�� char*�� �Ѱ� �� �� ���� ����.
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


	//// typedef / using = type�� ������.




	//// const_cast : ��� �Ӽ��� ���ִ� ���.
	//// �ִ��� �Ⱦ��� ����� ����.
	//// �Ϲ������� �����Ƽ���� �����ϴ� ��� ������ �ѱ�� ���..


	//// const_cast<>, static_cast<>, reinterpret_cast<> ���ó, ������ ����.
	//// static_cast<> �� �Ϲ������� ���� ����ϴ� ���.
	//// static_cast�� �Ϲ������� c��Ÿ���� ()ĳ���ð� ���� ������.

	//// reinterpret_cast<>
	//class Y {};
	//class X {};

	//X x;
	//Y y;
	//X* xp = &x;
	//Y* yp = &y;


	//// ���� ���� ���� ������ �̱� ������ ����ȯ �̷������ ����.
	////xp = static_cast<X*>(yp);

	//// reinterpret_cast�� ������ ���� ���� �ϰ���.
	//// �Ϲ������� �������� ����.
	//xp = reinterpret_cast<X*>(yp);

	//return 0;
	


	Sub mySub;
	Super mySuper;

	// ���� ���̵��� virtual Ű���尡 ���� ��� �θ� Ŭ������ �Լ��� �ڽ� Ŭ������ �״�� �����ؿͼ� ����.
	// �������̵��� �Լ��� ��� override Ű���� �߰����ִ°��� ����.
	// virtual func() overrride;


	static_cast<Super>(mySub).someMethod();
	mySub.someMethod();
	//cout <<"Super : " << mySuper.getInt() << endl;
	//cout <<"Sub :: " << mySub.getInt() << endl;


}