#include "stdafx.h"
#include "Super.h"
#include "Sub.h"


int main()
{
	Sub mysub;
	Super mySuper = mysub;

	mysub.someMethod();

	mySuper.someMethod();

	// UPCASTING. Super(�θ�)�� Sub(�ڽ�) �Ҵ�. �����ڷ� �����ϸ� �ڽ��� 
	// �޼ҵ�� ��� ���� ��������. �Ϲ����� ����� �θ��� �޼ҵ� ����.

	// �Ϲ� ���� => �θ��� someMethod ����
	Super mysuper2 = mysub;
	// ������ ���� => �ڽ��� someMethod ����
	Super& mysuper2 = mysub;
	mysuper2.someMethod();
	
	//UPCASTING �� ��� �ڽ��� ����� ���. 
	//���� UPCASTING�� ��� �׻� reference�� ���� => �ڽ� ���� ���� ��������.
	// �ڽĿ��� �������̵��Ѱ� ���� ��������.
	// UPCASTING�� �׻� ����.


	Super* mySuper3 = nullptr;
	// �����ؾ���. DOWNCASTING
	// ������Ÿ�ӿ� Ȯ���� �Ұ���.
	
	// �Ϲ������� ����� ����. => ��Ÿ�ӿ� Ÿ�� üũ�� �̷�� ��. => Dynamic_cast �ʿ�

	//Sub* mysub2 = mySuper3;

	// dynamic_cast�� Ÿ�� üũ�� ��Ÿ������ �̷�
	// Ŭ���� �˻縦 RTTI �˻� ����. Runtime Type Information
	// RTTI : �ڽ� ��ü�� ��𼭺��� �°��� �˻�.
	// �׻� ����Ǵ� ���� �ƴ�. �ش� Ŭ���� ������ Ȯ���Ͽ� ��Ӱ��� Ȯ�ν�
	// DOWNCASTING => �ݵ�� �ϳ� �̻��� Virtual Method�� ���� �ؾ� ��.
	// Virtual Keyword => V-Table ����.
	// V table : �����Լ����� �����͸� �����ϰ� �ִ� ���̺�.
	Sub* mysub2 = dynamic_cast<Sub*>(mySuper3);

	// �ٿ�ĳ������ ������ Ÿ�ӿ� Ÿ�� �˻簡 �Ұ��� => error. �Ϲ������� ��� �� ����.
	// ���� �۵� ������ ���� ����.


	// V-Table 
	// �θ�� �ڽ� ���� virtual keyword ���� �޼ҵ忡 ���� �Լ� ������ ���̺��� ���´�.
	// �ڽ��� override �� �ڽ��� v-Table�� �ش� �޼ҵ� ���̺� �Լ� �����Ͱ� �ڽ��� �������̵��� �޼ҵ��
	// �ٲ�.
	// override ���� ���� ��� �θ� Ŭ������ v-table�� �ش� �޼ҵ� �����͸� ����Ŵ.

	// virtual keyword ���� ���� �θ� Ŭ������ �޼ҵ带 �ڽĿ� �����ؼ� �����´�. => memory leak.
}