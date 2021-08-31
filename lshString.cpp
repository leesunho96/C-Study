#include "stdafx.h"
#include "lshString.h"



lshString::lshString(char *input)
{
	str = new char[strlen(input) + 1];
	*str = NULL;
	strcat(str, input);
	//memcpy(str, input, strlen(input) + 1);
}

lshString::lshString(lshString &input)
{
	int strsize = input.size();
	strsize += 1;
	this->str = new char[strsize + 1];
	const char* inputstr = input.getstr();
	memcpy(str, inputstr, strlen(inputstr) + 1);
}

const char* lshString::getstr()
{
	return str;
}

char lshString::at(int i)
{
	return str[i];
}

void lshString::erase(int index)
{
	memcpy(str + index, str + index + 1, strlen(str - index));
}

int lshString::size()
{
	return strlen(str);
}

bool lshString::swap(int index, char c)
{
	if (index >= strlen(str))
	{
		return false;
	}

	else
	{
		str[index] = c;
		return true;
	}
}

void lshString::reverse()
{
	int front = 0;
	int rear = strlen(str) - 1;
	while(front <= rear)
	{
		char temp = str[front];
		str[front] = str[rear];
		str[rear] = temp;
		front++;
		rear--;
	}
}

void lshString::insert(int index, char c)
{
	char* temp = str;
	str = new char[strlen(temp) + 2];
	memcpy(str, temp, strlen(str) + 1);
	memcpy(str + index + 1, temp + index, strlen(temp) - index + 1);
	str[index] = c;
}

lshString lshString::operator + (lshString &plus)
{
	int psize = plus.size();
	int tsize = this->size();

	char* ctemp;
	ctemp = new char[psize + tsize + 2];
	*ctemp = NULL;
	strcat(ctemp, this->str);
	strcat(ctemp, plus.getstr());
	lshString result(ctemp);
	delete ctemp;
	return result;
}

lshString& lshString::operator = (lshString &equal)
{
	int size = equal.size() + 1;
	const char* temp = equal.getstr();
	str = new char(size);
	memcpy(str, temp, size);

	return *this;
}
