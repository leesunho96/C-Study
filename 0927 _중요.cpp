#include "stdafx.h"
#include "Sub.h"
#include "Super.h"

/*
�Ϲ������� Ŭ������ �׳� �������� ����
��ü�� base(�θ�) Ŭ������ �Բ� ����
��Ӱ��迡�� ���� ������
1. ���� Ŭ������ ���� �� ��� ���� Ŭ������ ����Ʈ ������ ����
2. ���� Ŭ������ ������ �ʱ�ȭ ����Ʈ�� ���� Ŭ������ ������ ��ý� �ش� ������ ȣ��
3. static�� ������ Ŭ���� ������� ���� ������� ȣ��


�Ҹ��� ���� ����: �������� �ݴ����.
1. �ش� ��ü �Ҹ��� ȣ��
2. DataMember �Ҹ��� ȣ��
3. �θ� Ŭ������ �Ҹ��� ȣ��
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


// Something�� ���� �����Ǵ� ������ private �̱� ����. private ���� �ʱ�ȭ.
class Child : public Parent
{
	Something someData;
public:
	Child() : Parent(1){ cout << "3. Child" << endl; };

	// �Ҹ��� ȣ��Ǳ� ������ �̹� something �Ҹ��.
	// �ش� ��ü ��� ���� �Ҹ� �� ����, �Ҹ��� ȣ��.
	virtual ~Child() { cout << "3. ~Child" << endl; };
	
};

int main()
{
	//Child c1;


	// Parent* �̱� ������ Parent �Ҹ��� ȣ�� => �θ� Ŭ���� �������� �Ҹ��� ȣ�� ����
	// �޸� leak
	// ���� ��� ���迡 �־�� �ݵ�� �Ҹ��ڴ� virtual keyword ����.
	// �ֻ��� Ŭ������ �Ҹ��ڰ� virtual ����� ���� Ŭ������ ��� �Ҹ��ڴ� ���� �������� �ʾƵ�
	// virtual �Ҹ��ڷ� ���ǵ�.
	// �Ҹ��ڴ� �������ϸ� virtual ���� �Ұ�.
	// virtual keyword ������ memset ������� ���� => v-table ����
	Parent* pPtr = new Child();
	delete pPtr;


	return 0;
}