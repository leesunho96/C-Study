#include "stdafx.h"

template<typename T>
class Character
{
protected:
	T name;
public:
	void set(T name)
	{
		this->name = name;
	}

	Character(T input) { this->name = name; };

	virtual void Print() = 0;
};

class Player : public Character<int> // Template를 int 형으로만 제한.
{
public:
	void Print() override
	{
		printf("%d\n", name);
	}
	Player(int input) : Character<int>(input) {};
};

class Enemy : public Character<string>
{
public:
	void Print() override
	{
		printf("%s\n", name.c_str());
	}
	Enemy(string input) : Character<string>(input) {};
};


int main()
{
	Player ob(10);

	ob.Print();

	Enemy eOb("lsh");

	eOb.Print();

	return 0;
}