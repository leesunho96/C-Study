#include "stdafx.h"
#include "Character.h"


// matchfun 함수 포인터 선언, bool 형 반환값, int 두개의 매개변수.
using MatchFun = bool(*)(int, int);

typedef bool(*matchFun)(int, int);
// 위 두가지의 기능은 동일.
//함수 포인터는 매개변수와 반환값이 동일한 경우에만 사용 가능.


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

	//// C스타일의 강제 캐스팅. 문법적인 오류는 아니지만, 실제 기능에서 오류가 존재 -> char 포인터로는 character 내부 접근 불가능.
	//char* charPtr = (char*)myCharacter;

	//// 배열은 포인터, 배열의 첫번째 원소의 주소값이 배열 이름의 값.
	//int myarr[10];
	//int* myIntPTR = myarr;
	//
	//// 포인터로 배열 접근 가능함.
	//myIntPTR[1] = 2;


	////배열 == 포인터, 모든 포인터 != 배열. 포인터가 배열이 될 수는 있지만, 모든 포인터가 배열은 아니다.



	//// smartPointer : new / delete 의 동적 할당 관련 오류 방지

	//// 객체풀 : 일반적으로 게임 프로그래밍 중에서 메모리 new/delete 하지는 않음.(렉이 매우 심해질것)
	//// 객체 풀을 이용하여 필요한 만큼의 메모리를 로딩 시간에 전부 할당함. 
	//// 인게임 플레이중 메모리가 필요한 경우 미리 할당된 객체 풀을 이용하여 값을 저장 한 후, 해당 값 사용이 완료 된 후 delete 하는것이 아니라 객체 풀에 반환.

	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 4, 5, 6 };
	int arrsize = sizeof(arr1) / sizeof(arr1[0]);
	
	MatchFun funcpointer = IntEqual;

	FindMatches(arr1, arr2, arrsize, BothOdd);

	
}