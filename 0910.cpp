#include "stdafx.h"
#include "Character.h"


int main()
{
	////2���� �迭�� �������� �����ϴ� ���.
	//// ���� ������ ������, �ش� �����Ϳ� X��ŭ�� ���� ������ �迭 ����.
	//// �ش� ���� ������ �迭�� ������ ���� �迭 ����.
	
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

	// ������ �ļ�. �Ϲ� 1���� �迭�� �����ϰ�, 2���� �迭ó�� ������ �� ����.
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



	// Ŭ���� ���߹迭 �����Ҵ�.
	// Ŭ������ �Ϲ����� ��Ȳ���� new �̿�, malloc ������� ����.

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