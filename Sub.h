#pragma once
#include "Super.h"
class Sub :
	public Super
{
public:
	Sub();
	~Sub();

	int getInt() { return mProtectedInt; };

	virtual void someMethod() override { cout << "Sub someMethod" << endl; };
	void someOtherMethod() {};
	
};

