#include "stdafx.h"
#include "Character.h"


// matchfun �Լ� ������ ����, bool �� ��ȯ��, int �ΰ��� �Ű�����.
using MatchFun = bool(*)(int, int);

typedef bool(*matchFun)(int, int);
// �� �ΰ����� ����� ����.
//�Լ� �����ʹ� �Ű������� ��ȯ���� ������ ��쿡�� ��� ����.


void FindMatches(int values[], int values2[], size_t numValues, MatchFun intFunc)
{
	for (size_t i = 0; i < numValues; i++)
	{
		if (intFunc(values[i], values2[i]))
		{
			cout << "Match found at Potision at " << i << "(" << values[i] << ", " << values2[i] << ")" << endl;
		}
	}
}


bool IntEqual(int item1, int item2)
{
	return item1 == item2;
}

bool BothOdd(int item1, int item2)
{
	return item1 % 2 == 1 && item2 % 2 == 1;
}


int main()
{
	//Character* myCharacter = new Character;

	//// C��Ÿ���� ���� ĳ����. �������� ������ �ƴ�����, ���� ��ɿ��� ������ ���� -> char �����ͷδ� character ���� ���� �Ұ���.
	//char* charPtr = (char*)myCharacter;

	//// �迭�� ������, �迭�� ù��° ������ �ּҰ��� �迭 �̸��� ��.
	//int myarr[10];
	//int* myIntPTR = myarr;
	//
	//// �����ͷ� �迭 ���� ������.
	//myIntPTR[1] = 2;


	////�迭 == ������, ��� ������ != �迭. �����Ͱ� �迭�� �� ���� ������, ��� �����Ͱ� �迭�� �ƴϴ�.



	//// smartPointer : new / delete �� ���� �Ҵ� ���� ���� ����

	//// ��üǮ : �Ϲ������� ���� ���α׷��� �߿��� �޸� new/delete ������ ����.(���� �ſ� ��������)
	//// ��ü Ǯ�� �̿��Ͽ� �ʿ��� ��ŭ�� �޸𸮸� �ε� �ð��� ���� �Ҵ���. 
	//// �ΰ��� �÷����� �޸𸮰� �ʿ��� ��� �̸� �Ҵ�� ��ü Ǯ�� �̿��Ͽ� ���� ���� �� ��, �ش� �� ����� �Ϸ� �� �� delete �ϴ°��� �ƴ϶� ��ü Ǯ�� ��ȯ.

	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 4, 5, 6 };
	int arrsize = sizeof(arr1) / sizeof(arr1[0]);
	
	MatchFun funcpointer = IntEqual;

	FindMatches(arr1, arr2, arrsize, BothOdd);

	
}