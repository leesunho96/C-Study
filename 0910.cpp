#include "stdafx.h"
#include "Character.h"


int main()
{
	////2차원 배열을 동적으로 선언하는 방법.
	//// 더블 포인터 선언후, 해당 포인터에 X만큼의 일차 포인터 배열 선언.
	//// 해당 일차 포인터 배열에 각각의 일차 배열 선언.
	
	//int** handle;

	//handle = new int*[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	handle[i] = new int[10];
	//}

	//for (size_t i = 0; i < 10; i++)
	//{
	//	for (size_t j = 0; j < 10; j++)
	//	{
	//		handle[i][j] = i * j;
	//	}
	//}

	//for (size_t i = 0; i < 10; i++)
	//{
	//	for (size_t j = 0; j < 10; j++)
	//	{
	//		cout << handle[i][j] << "  ";
	//	}
	//	cout << endl;
	//}

	//cout << handle << endl;
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	delete[] handle[i];
	//}

	//free(handle);
	//
	//cout << handle;

	//int *handle;

	// 일종의 꼼수. 일반 1차원 배열을 정의하고, 2차원 배열처럼 접근할 수 있음.
	//handle = (int*)malloc(sizeof(int) * 25);
	//*((handle + 5) + 1) = 1;

	//int arrsize = 5;
	//for (size_t i = 0; i < arrsize; i++)
	//{
	//	for (size_t j = 0; j < arrsize; j++)
	//	{
	//		*((handle + i * arrsize) + j) = i * j;
	//	}
	//}
	//for (size_t i = 0; i < 25; i++)
	//{
	//	cout << handle[i] << "  ";
	//}

	//free(handle);



	// 클래스 이중배열 동적할당.
	// 클래스는 일반적인 상황에서 new 이용, malloc 사용하지 않음.

	/*size_t arrSize = 4;
	Character** mycharptrarr = new Character*[arrSize];

	for (size_t i = 0; i < arrSize; i++)
	{
		mycharptrarr[i] = new Character[arrSize];
	}


	for (size_t i = 0; i < arrSize; i++)
	{
		for (size_t j = 0; j < arrSize; j++)
		{
			cout << mycharptrarr[i][j].getname() << " ";
		}
		cout << endl;
	}

	for (size_t i = 0; i < arrSize; i++)
	{
		delete[] mycharptrarr[i];
	}

	delete[] mycharptrarr;
*/

	
}