#include "stdafx.h"



//�޾�� ���⹮��.
// strlen�� �� ���ڸ� ������ ũ�⸦ ��ȯ.
// ���ڿ� ���� ���� �� �� �޸� �Ҵ�� strlen + 1�� �� �ʿ䰡 ����.
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


	//temp1�� ��� temp1�� ����� �ּҰ� + A  �� �޸� �Ҵ��Ͽ� ����
	//temp2�� ��� temp�� �� �޸� �ּҰ��� ����. �� �޸𸮿� ����.
	char temp1[] = "ab";
	char *temp2 = "ab";

	if (strcmp(temp1, temp2))
	{
		cout << "����" << endl;
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