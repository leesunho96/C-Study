#include "stdafx.h"
#include "Character.h"

Character::Character()
{
	cout << "�⺻������" << endl;
	name = "SGA";
	hp = 10;


	temp = new int;
}

Character::Character(string name, int hp)
	:name(name)
{
	cout << "�Ķ���� �ִ� ������" << endl;

	this->name = name;
	this->hp = hp;

	(*this).name;

	temp = new int;
}

Character::Character(Character && src)
{
	cout << "�̵�������" << endl;
	name = src.name;
	hp = src.hp;

	// src�� �� ���� �޸� ������ �̵�
	temp = src.temp;

	//src������ ������ �����ؾߵ�.
	src.temp = nullptr;
}

string Character::getname()
{
	return name;
}

Character::~Character()
{
	cout << "�⺻ �Ҹ��� ȣ��" << endl;
}
