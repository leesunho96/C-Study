#pragma once

class Character
{
public:
	Character();
	Character(string name, int hp);

	string getname();


	~Character();
protected:

private:
	string name;
	int hp;

};
