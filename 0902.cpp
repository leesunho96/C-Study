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
	//// iterator(�ݺ���) : �����̳� ������ �����Ϳ� ����� ����.
	//// �׻� �ش� �����̳� ���θ� ����Ŵ.
	//// �ݺ����� �������� �ش� ������ ���� ����
	//// ��� STL �����̳� ���ο� ������, ���� ����.


	//vector<int> numlist;
	//int max = -1;

	////auto ���� ���� ����
	//// iter ���� !=�� �̿���. vector.end()�� ������ iter, ���� �Ұ���.
	//
	//while (true)
	//{

	//}

	//max /= 100;


	////begin(numlist)�� ���� ���µ� ����. begin�� std�� ���� �Ǿ� ������, �ش� �����̳��� ù��° ��ȯ�ϴ� �Լ�.
	////end(numlist) = �ش� �����̳��� ������ �ݺ��� ��ȯ.
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


	// testv�� ���� intvector�� ó������ ������ ����.
	//            where             from                from-end
	testv.insert(cend(testv), cbegin(intvector), cend(intvector));

	// ���ۺ��� ������ ����. e.g. size = 10�� �����϶� 0 ~ 9 ����
	// end = 10
	testv.erase(begin(testv), end(testv));

	// �ش� ���� ������ ���.
	testv.clear();


}