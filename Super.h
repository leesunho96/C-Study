#pragma once
class Super
{
public:
	Super();
	~Super();

	// virtual keyword�� ������ submethod�� ��� Super �̿��Ѱ��� �ƴ϶�
	// Super�� 
	virtual void someMethod() { cout << "Super someMethod" << endl; };
	int getInt() { return mProtectedInt; };

protected:
	int mProtectedInt;

private:
	int mPrivateInt;
};

