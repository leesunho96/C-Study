#include "stdafx.h"
#include "lshString.h"


//�޾�� ���⹮��.
// strlen�� �� ���ڸ� ������ ũ�⸦ ��ȯ.
// ���ڿ� ���� ���� �� �� �޸� �Ҵ�� strlen + 1�� �� �ʿ䰡 ����.
char* CopyString(const char* str)
{
	char* result = new char(strlen(str) + 1);

	return result;
}

char* AppendString(const char* str1, const char* str2, const char* str3)
{
	char* result = new char(strlen(str1) + strlen(str2) + strlen(str3) + 1);
	memcpy(result, str1, sizeof(char) * strlen(str1));
	memcpy(result + strlen(str1), str2, sizeof(char) * strlen(str2));
	memcpy(result + strlen(str1) + strlen(str2), str3, sizeof(char) * strlen(str3) + 1);
	return result;
}

int main()
{
	//string a("12");
	//string b("23");
	//string c = a + b;


	////temp1�� ��� temp1�� ����� �ּҰ� + a  �� �޸� �Ҵ��Ͽ� ���� temp1[3] = "12\n"
	////temp2�� ��� temp2���� �б� ���� �޸𸮿� ����� "ab"�� ����Ŵ.

	//char temp1[] = "ab";
	//char *temp2 = "ab";
	//char *temp4 = "ab";

	//cout << temp2[1] << endl;
	//cout << temp1 + 1 << "    " << &temp1 << endl;
	//cout << temp2 + 1 << "    " << &temp2  << endl;
	//string mystring = "hello";
	//mystring += ", there";
	//string mystring2 = "hello, there";

	//if (mystring == mystring2)
	//{
	//	mystring2[0] = 'h';
	//}
	//cout << mystring2 << endl;


	////r�̿�� ���� ���ڿ��� ���� �Ϲ� ĳ���� ������ ����.
	//string temp3 = r"(abcd""""efg)"; // (abcde""""fg) ��� 



	////temp2�� temp4�� ������ �б� ���� �޸� �����ϰ� ����.
	//printf("%d, %d", &temp2[0], &temp4[0]);
	
	//char* test = "1234";
	//char* test2 = "efgh";
	//char* test3 = "ijkl";
	//char* test4 = AppendString(test, test2, test3);
	//cout << test4;

	lshString test1("asdf");
	cout << "lshstring test1�� �� : " << test1.getstr() << endl;
	lshString test2("qwer");
	cout << "lshstring test2�� �� : " << test2.getstr() << endl;
	lshString test3(test1);
	cout << "lshstring test3(test1�� �Ű������� �� ��������� lshString)�� �� : " << test3.getstr() << endl;
	test1 = test2;
	cout << "test1 = test2�� �� test1�� ����� : " << test1.getstr() << endl;
	cout << "test3.at(1)�� �� : " << test3.at(1) << endl;
	test3.erase(0);
	cout << "test3.erase(0)�� ����� : " << test3.getstr() << endl;
	test3.swap(1, 'c');
	cout << "test3.swap(1, 'c')�� �� test3�� ����� : " << test3.getstr() << endl;
	test3.reverse();
	cout << "test3.rear()���� test3�� ����� : " << test3.getstr() << endl;
	test3.insert(0, 'c');
	cout << "test3.insert(0, 'c')���� test3�� ����� : " << test3.getstr() << endl;
	test3 = test1 + test2;
	cout << test3.getstr();
}