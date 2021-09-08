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
	// map : ���� �����̳�. 
	// key-value ������ ������.
	// STL : 4���� ���� �����̳� ���� -> map, multimap, set, multiset -> ���ο��� ������ ��� ������.

	// ����� ���� �����̳� ���� (������ ���� ����)
	// =>unorderd_map / unordered_multimap / unordered_set / unordered_multiset ==> hash

	// pair => ���� �ٸ� �ΰ��� ���� �ϳ��� ������ grouping �ϴ� ���ø�.
	// first / second�� ���� ����
	// �� ������ ���� ���� => first �� �������� ��� ������.

	pair<string, int> myFirstPair("hello", 1); // string, int �ΰ��� ���� �ϳ��� Ÿ������ ����
	pair<string, int> myOtherPair;

	myOtherPair.first = "hello";
	myOtherPair.second = 6;

	pair<string, int> myThirdPair(myOtherPair);

	if (myFirstPair < myOtherPair)
	{
		cout << "myFirstPair is bigger than myOtherPair" << endl;
	}
	else
	{
		cout << "myOtherpair is bigger than myFirstPair" << endl;
	}

	if (myThirdPair == myOtherPair)
	{
		cout << "myThirdPair is same with myOtherPair" << endl;
	}
	else
	{
		cout << "myOtherpair is different with myThridPair" << endl;
	}

	pair<int, int> aPair = make_pair(1, 2);
	auto secondPair = make_pair(3, 4);

	// �Ϲ����� pair�� �����͸� �̿��ϸ� ���� �߻� ���� => pair�� ���������� ���� ������.
	// => ����Ʈ������(sharedptr)���� ���� �ذ� ����.
	// shared_ptr : �ϳ��� �޸� �ּҸ� �������� �����Ͱ� ����ų �� ���� : reference count�� ������, �ش� �ּҸ� ����Ű�� �������� ������ ����.
	// �ش� �����͸� �����Ҷ� referenced counter �� 0�� ��쿡�� �ش� �޸𸮸� �����ϰ�, �׷��� ���� ��� �������� ����.

	// map : key-value ������ ����.
	// ��� �۾��� key�� ����. key�� ���ؼ� ����/����/���� ��� �۾��� �����Ѵ�.
	// key�� ���� ���� ������ => mapping
	// red-black tree => ���� ���� Ʈ��.
	
	// hash_map : hash table�� �̷����. : hash �̿�

	// hash_map�� map�� ������ ����� ���� ���� ����.


	//Uniform �ʱ�ȭ
	map<string, int> m = 
	{
		{"a", 1},
		{"b", 2}
	};

	//insert�Լ�
	m.insert(make_pair("c", 3));

	// "a"�� Ű���� ���� 99 value ����.
	// "a"�� Ű���� �����ϴ� ����� �ƴ�. ���ο� ������ ����.
	m["a"] = 99;

	// map�� key������ ������ ����.
	// iterator ������� ����.
	m.erase("a"); 

	if (m.empty == false)
	{
		cout << m.size() << endl;
	}

	cout << "a" << m.find("a")->second;

	// �Ϲ� ���� �ߺ� key���� ������ ����. �ߺ� key�� �������� multi_map �̿�.

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "key : " << iter->first << " " << "value : " << iter->second << endl;
	}

	for (auto i : m)
	{
		cout << "key : " << i.first << " value : " << i.second << endl;
	}
}