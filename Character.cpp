#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "�⺻������" << endl;
	name = "SGA";
	hp = 10;

}

Character::Character(string name, int hp)
	:name(name)
{
	cout << "�Ķ���� �ִ� ������" << endl;

	this->name = name;
	this->hp = hp;

	(*this).name;


}

string Character::getname()
{
	return name;
}

Character::~Character()
{
	cout << "�⺻ �Ҹ��� ȣ��" << endl;
}
