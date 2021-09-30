#pragma once


class Super
{
public:
	Super();
	~Super();

	// virtual keyword가 없으면 submethod의 경우 Super 이용한것이 아니라
	// Super를 복사해서 사용 : 메모리 낭비
	virtual void someMethod() { cout << "Super someMethod" << endl; };
	int getInt() { return mProtectedInt; };

protected:
	int mProtectedInt;

private:
	int mPrivateInt;
};

