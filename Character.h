#pragma once

class Character
{
public:
	Character();
	Character(string name, int hp);

	// �̵������� ����.
	Character(Character&& src);

	string getname();


	~Character();
protected:

private:
	string name;
	int hp;
	int* temp;
};
