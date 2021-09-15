#pragma once

class Character
{
public:
	Character();
	Character(string name, int hp);

	// 이동생성자 구현.
	Character(Character&& src);

	string getname();


	~Character();
protected:

private:
	string name;
	int hp;
	int* temp;
};
