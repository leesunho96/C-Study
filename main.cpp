#include "stdafx.h"
#include "lshString.h"


//펄어비스 기출문제.
// strlen은 널 문자를 제외한 크기를 반환.
// 문자열 복사 등을 할 때 메모리 할당시 strlen + 1을 할 필요가 있음.
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


	////temp1의 경우 temp1에 저장된 주소값 + a  로 메모리 할당하여 구현 temp1[3] = "12\n"
	////temp2의 경우 temp2에는 읽기 전용 메모리에 저장된 "ab"를 가리킴.

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


	////r이용시 내부 문자열을 전부 일반 캐릭터 형으로 정의.
	//string temp3 = r"(abcd""""efg)"; // (abcde""""fg) 출력 



	////temp2와 temp4가 동일한 읽기 전용 메모리 공유하고 있음.
	//printf("%d, %d", &temp2[0], &temp4[0]);
	
	//char* test = "1234";
	//char* test2 = "efgh";
	//char* test3 = "ijkl";
	//char* test4 = AppendString(test, test2, test3);
	//cout << test4;

	lshString test1("asdf");
	cout << "lshstring test1의 값 : " << test1.getstr() << endl;
	lshString test2("qwer");
	cout << "lshstring test2의 값 : " << test2.getstr() << endl;
	lshString test3(test1);
	cout << "lshstring test3(test1을 매개변수로 한 복사생성한 lshString)의 값 : " << test3.getstr() << endl;
	test1 = test2;
	cout << "test1 = test2를 한 test1의 결과값 : " << test1.getstr() << endl;
	cout << "test3.at(1)의 값 : " << test3.at(1) << endl;
	test3.erase(0);
	cout << "test3.erase(0)의 결과값 : " << test3.getstr() << endl;
	test3.swap(1, 'c');
	cout << "test3.swap(1, 'c')를 한 test3의 결과값 : " << test3.getstr() << endl;
	test3.reverse();
	cout << "test3.rear()후의 test3의 결과값 : " << test3.getstr() << endl;
	test3.insert(0, 'c');
	cout << "test3.insert(0, 'c')후의 test3의 결과값 : " << test3.getstr() << endl;
	test3 = test1 + test2;
	cout << "test3 = test1 + test2의 결과로 나온 test3의 값 : " << test3.getstr() << endl;

}