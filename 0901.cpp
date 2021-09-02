#include "stdafx.h"

void printVector(vector<int> input)
{
	for (auto output : input)
	{
		cout << output << " , ";
	}
	cout << endl;
}

int main()
{
	//////STL : STANDARD LIBRARY
	//// ���� �����̳� : ����. deque, list, forward_list, array
	//// �켱 ���� �����̳� : priority_queue, 


	//// ����ũ�� vector, �����δ� �߰������� ���� �� ��� �޸� �߰� �Ҵ� ��, ����.
	// ���ʹ� ���� ��ü�� �纻 ����. �׻� �������� ����. => ������� ���̱� ���� const & ��뵵 ���� ��.
	//vector<double> doubleVector(10);

	////
	//double max = -numeric_limits<double>::infinity();
	//for (size_t i = 0; i < doubleVector.size(); i++)
	//{
	//	cout << "enterScore : ";
	//	
	//	cin >> doubleVector[i];
	//	doubleVector[i] > max ? max = doubleVector[i] : max;
	//}

	//max /= 100.0f;

	////�����Ⱓ forloop, doubleVector�� ���������� ���鼭 �ش� ���Ҹ� Ȱ��.
	//// auto keyword�� �ش� element�� ����� Ÿ�� �ڵ� �Ҵ�
	//// &(������)�� ���� ����, ������ ������� ���� ��� �纻 ����..
	//// ������ �������� ���� ��� �纻�� �Ҵ�Ǹ�, ������ ������� ����.

	////������ ������ ����. - ������ ����
	//for (auto& element : doubleVector)
	//{
	//	element /= max;
	//	cout << element << " ";
	//}

	//////������ �������� ���� ����. - ������ ������� ����.
	////for (auto element : doubleVector)
	////{
	////	element /= max;
	////	cout << element << " ";
	////}
	////// ���� ���
	////for (auto vec : doubleVector)
	////{
	////	cout << vec << "   ";
	////}

	//vector<int> vint;

	//// 10���� 100�� ���� ����.
	//vector<int> vvint(10, 100);

	//for (auto vec: vvint)
	//{
	//	cout << vec << "  ";
	//}
	//cout << endl;

	//vector<int> vvvint({ 1, 2, 3, 4, 5, 6, }); // vvvint = {1, 2, 3, 4, 5, 6}, vvint{1, 2, 3, 4, 5, 6}

	//vector<int> test(10);

	////   assign : �ش� ���� �ʱ�ȭ ��, �Ŀ� �����ϴ´�� �ʱ�ȭ ����
	//test.assign(5, 100); // {5, 5, 5, 5,5 , ``````5 } // 5�� 100��
	//test.assign({ 1, 2, 3, 4 }); // {1, 2, 3, 4}�� �ʱ�ȭ.

	//printVector(test);


	vector<int> vectorOne(10, 0);
	printVector(vectorOne);

	vector<int> vectorTwo(5, 100);
	printVector(vectorTwo);


	// swap���� ���Ͱ� ��ȯ ����
	vectorOne.swap(vectorTwo);

	printVector(vectorOne);
	printVector(vectorTwo);


	vectorOne = vectorTwo;

	if (vectorOne == vectorTwo)
		cout << "same" << endl;
	else
		cout << "different" << endl;


	vectorOne[3] == 50;

	if (vectorOne < vectorTwo)
	{
		cout << "two is bigger than one" << endl;
	}
	else
	{
		cout << "two is smaller than one" << endl;
	}
}