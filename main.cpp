#include "stdafx.h"



//펄어비스 기출문제.
// strlen은 널 문자를 제외한 크기를 반환.
// 문자열 복사 등을 할 때 메모리 할당시 strlen + 1을 할 필요가 있음.
char* CopyString(const char* str)
{
	char* result = new char(strlen(str) + 1);
	

	return result;
}

char* AppendString(const char* str1, const char* str2, const char* str3){
	char *result = new char(strlen(str1) + strlen(str2) + strlen(str3) -2);
	memcpy(result, str1, sizeof(char) * (strlen(str1) - 1));
	memcpy(result + strlen(str1) - 1, str2, sizeof(char) * (strlen(str2) - 1));
	memcpy(result + strlen(str1) + strlen(str2) - 2, str3, sizeof(char) * (strlen(str3)));
	return result;
}

int main()
{
	string A("12");
	string B("23");
	string C = A + B;


	//temp1의 경우 temp1에 저장된 주소값 + A  로 메모리 할당하여 구현
	//temp2의 경우 temp에 힙 메모리 주소값을 가짐. 힙 메모리에 저장.
	char temp1[] = "ab";
	char *temp2 = "ab";

	if (strcmp(temp1, temp2))
	{
		cout << "같음" << endl;
	}

	cout << temp1 + 1 << "    " << &temp1 << endl;
	cout << temp2 + 1 << "    " << &temp2  << endl;
	string mystring = "hello";
	mystring += ", there";
	string mystring2 = "hello, there";

	if (mystring == mystring2)
	{
		mystring2[0] = 'H';
	}
	cout << mystring2 << endl;




	
}