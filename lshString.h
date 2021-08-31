#pragma once
#define _CRT_SECURE_NO_WARNINGS
class lshString
{
	char *str;


public:
	lshString(char* input); // �⺻ ������, ���ڿ��� �Է¹޾Ƽ� �ش� ���ڿ���ŭ  new�� char�迭 ����, �ش� �� ����
	lshString(lshString &input); // ���������, �Ű������� lshString �ϳ� �ް�, �ش� ���� ���� strũ�⸸ŭ ���� �迭 ����, �ش� �� ����
	char* getstr(); // �ش� str�� �� ��ȯ
	char at(int i); // �ش� index�� �ִ� �� ��ȯ
	void erase(int index); // �ش� index�� �ִ� �� ����
	int size(); // �ش� str�� ũ�� ��ȯ
	bool swap(int index, char c); // �ش� index�� ���� c�� ��ȯ
	void reverse(); // �ش� str�� �ݴ�� ������
	void insert(int index, char c); // �ش� index�� c ����.

	lshString operator + (lshString &plus);
	lshString& operator = (lshString &equal);
};

