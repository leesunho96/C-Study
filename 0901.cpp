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
	//// 순차 컨테이너 : 벡터. deque, list, forward_list, array
	//// 우선 순위 컨테이너 : priority_queue, 


	//// 고정크기 vector, 실제로는 추가적으로 삽입 할 경우 메모리 추가 할당 후, 삽입.
	// 벡터는 각각 객체의 사본 저장. 항상 깊은복사 진행. => 오버헤드 줄이기 위해 const & 사용도 많이 함.
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

	////범위기간 forloop, doubleVector를 순차적으로 돌면서 해당 원소를 활용.
	//// auto keyword로 해당 element에 적용될 타입 자동 할당
	//// &(참조자)로 원본 접근, 참조자 사용하지 않을 경우 사본 접근..
	//// 참조자 선언하지 않을 경우 사본에 할당되며, 원본은 적용되지 않음.

	////참조자 적용한 버전. - 원본에 적용
	//for (auto& element : doubleVector)
	//{
	//	element /= max;
	//	cout << element << " ";
	//}

	//////참조자 적용하지 않은 버전. - 원본에 적용되지 않음.
	////for (auto element : doubleVector)
	////{
	////	element /= max;
	////	cout << element << " ";
	////}
	////// 원본 출력
	////for (auto vec : doubleVector)
	////{
	////	cout << vec << "   ";
	////}

	//vector<int> vint;

	//// 10개의 100을 가진 벡터.
	//vector<int> vvint(10, 100);

	//for (auto vec: vvint)
	//{
	//	cout << vec << "  ";
	//}
	//cout << endl;

	//vector<int> vvvint({ 1, 2, 3, 4, 5, 6, }); // vvvint = {1, 2, 3, 4, 5, 6}, vvint{1, 2, 3, 4, 5, 6}

	//vector<int> test(10);

	////   assign : 해당 백터 초기화 후, 후에 존재하는대로 초기화 가능
	//test.assign(5, 100); // {5, 5, 5, 5,5 , ``````5 } // 5가 100개
	//test.assign({ 1, 2, 3, 4 }); // {1, 2, 3, 4}로 초기화.

	//printVector(test);


	vector<int> vectorOne(10, 0);
	printVector(vectorOne);

	vector<int> vectorTwo(5, 100);
	printVector(vectorTwo);


	// swap으로 벡터간 교환 가능
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