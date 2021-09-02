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
	//// iterator(반복자) : 컨테이너 내부의 포인터와 비슷한 개념.
	//// 항상 해당 컨테이너 내부만 가리킴.
	//// 반복자의 역참조시 해당 데이터 접근 가능
	//// 모든 STL 컨테이너 내부에 시작점, 끝점 존재.


	//vector<int> numlist;
	//int max = -1;

	////auto 선언도 물론 가능
	//// iter 사용시 !=를 이용함. vector.end()는 마지막 iter, 접근 불가능.
	//
	//while (true)
	//{

	//}

	//max /= 100;


	////begin(numlist)와 같은 형태도 가능. begin은 std에 정의 되어 있으며, 해당 컨테이너의 첫번째 반환하는 함수.
	////end(numlist) = 해당 컨테이너의 마지막 반복자 반환.
	//for (vector<int>::iterator iter = numlist.begin(); iter != numlist.end(); iter++)
	//{
	//	*iter /= max;
	//	cout << *iter << "  " << endl;
	//}


	vector<int> intvector(10);

	auto it = begin(intvector);

	// begin + 5 => intVector[5]
	it += 5;
	// intVector[4];
	--it;
	// intVector[4] = 4;
	*it = 4;

	printVector(intvector);

	intvector.insert(it, 5);

	printVector(intvector);


	vector<int> testv;


	// testv의 끝에 intvector의 처음부터 끝까지 삽입.
	//            where             from                from-end
	testv.insert(cend(testv), cbegin(intvector), cend(intvector));

	// 시작부터 끝까지 삭제. e.g. size = 10인 벡터일때 0 ~ 9 삭제
	// end = 10
	testv.erase(begin(testv), end(testv));

	// 해당 벡터 완전히 비움.
	testv.clear();
}