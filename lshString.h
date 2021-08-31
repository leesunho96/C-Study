#pragma once
#define _CRT_SECURE_NO_WARNINGS
class lshString
{
	char *str;


public:
	lshString(char* input); // 기본 생성자, 문자열을 입력받아서 해당 문자열만큼  new로 char배열 생성, 해당 값 복사
	lshString(lshString &input); // 복사생성자, 매개변수로 lshString 하나 받고, 해당 값이 갖는 str크기만큼 동적 배열 생성, 해당 값 복사
	const char* getstr(); // 해당 str의 값 반환
	char at(int i); // 해당 index에 있는 값 반환
	void erase(int index); // 해당 index에 있는 값 삭제
	int size(); // 해당 str의 크기 반환
	bool swap(int index, char c); // 해당 index의 값을 c로 변환
	void reverse(); // 해당 str을 반대로 뒤집음
	void insert(int index, char c); // 해당 index에 c 삽입.

	lshString operator + ( lshString &plus);
	lshString& operator = (lshString  &equal);
};

